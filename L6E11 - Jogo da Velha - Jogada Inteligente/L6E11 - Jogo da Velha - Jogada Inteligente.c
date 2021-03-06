#include <stdio.h>
#include <conio.h>
#include <time.h>
#include <stdlib.h>
#define DIM 3
#define iguais(a,b,c) (a!=' ' && a==b && b==c)

int sortear();
void exibe(char m[DIM][DIM]);
void preencheMatriz(char m[DIM][DIM]);
void input(char m[DIM][DIM], char jogador);
void inputComputador(char m[DIM][DIM], char jogador);
int completa(char m[DIM][DIM], char jogador, int ad);
int vencedor(char m[DIM][DIM]);


int main(void){
	srand(time(NULL)); //Seed aleatório do Rand

	char jogadorComputador, jogadorHumano, jogadorAtual, jogadorVencedor = ' ';
	int jogadas = 0;

	char m[DIM][DIM];
	preencheMatriz(m);

	jogadorAtual = sortear(); 
	exibe(m);

	while(jogadas < 9){
		
		if (jogadorAtual == 1){
			input(m,'x');
			exibe(m);
			jogadorVencedor = vencedor(m);
			if (jogadorVencedor != ' '){
				printf("Vencedor: %c\n", jogadorVencedor);
				break;
			}
		}
		else{
			inputComputador(m,'o');
			exibe(m);
			jogadorVencedor = vencedor(m);
			if (jogadorVencedor != ' '){
				printf("Vencedor: %c\n", jogadorVencedor);
				break;
			}
		}
		++jogadas;
		jogadorAtual *= -1;
	}
	(jogadas == 9? puts("Empate") : puts("Parabens"));

	system("PAUSE");
	return 0;
}

int sortear(){
	int escolha = -1;
	printf("Escolha 0 ou 1: ");
	scanf_s("%d", &escolha);
	int sorteado = rand()%2; 
	_sleep(1);

	(escolha==sorteado? puts("Voce comeca!") : puts("Computador comeca!"));
	_sleep(2);
	return (sorteado==escolha? 1 : -1);
}

void exibe(char m[DIM][DIM]){
	_clrscr();
	for (int i = 0; i < DIM; ++i){
		printf(" %c | %c | %c \n", m[i][0], m[i][1], m[i][2]);
		if (i<2) puts("---+---+---");
	}
}

void preencheMatriz(char m[DIM][DIM]){
	puts("Jogo da velha");
	for (int i = 0; i < DIM; ++i){
		for (int j = 0; j < DIM; ++j){
			m[i][j] = ' ';
		}
	}
}

void input(char m[DIM][DIM], char jogador){
	int linha, coluna;
	do{
		printf("Insira o numero da linha e depois da coluna: ");
		scanf_s("%d %d", &linha, &coluna);
		linha--; coluna--;
	}while(linha<0 || linha > 2 || coluna < 0 || coluna > 2 || m[linha][coluna] != ' ');

	m[linha][coluna] = jogador;
}

void inputComputador(char m[DIM][DIM], char jogador){
	int linha, coluna;
	if (!completa(m,jogador,1) && !completa(m,jogador,0)){
		do{
			linha=rand()%3+1;
			coluna=rand()%3+1;
		}while(m[linha][coluna] != ' ');
		m[linha][coluna] = jogador;
	}
}

int completa(char m[DIM][DIM], char jogador, int ad){
	//ad == ataque ou defesa
	//1 para ataque (lança) - 0 para defesa (escudo)

	if (ad == 1){	//Ataque
		for (int i = 0; i < DIM; ++i) {
					//HORIZONTAL
			if (m[i][0] == 'o' && m[i][0] == m[i][1] && m[i][2] == ' '){
				m[i][2] = 'o';
				return 1;
			}
			else if (m[i][0] == 'o' && m[i][0] == m[i][2] && m[i][1] == ' '){
				m[i][1] = 'o';
				return 1;
			}
			else if (m[i][1] == 'o' && m[i][1] == m[i][2] && m[i][0] == ' '){
				m[i][0] = 'o';
				return 1;
			}
			//		VERTICAL
			else if (m[0][i] == 'o' && m[0][i] == m[1][i] && m[2][i] == ' '){
				m[2][i] = 'o';
				return 1;
			}
			else if(m[0][i] == 'o' && m[2][i] == m[0][i]&& m[1][i] == ' '){
				m[1][i] = 'o';
				return 1;
			}
			else if(m[1][i] == 'o' && m[1][i] == m[2][i] && m[0][i] == ' '){
				m[0][i] = 'o';
				return 1;
			}

				//DIAGONAL
			else if(m[0][0] == 'o' && m[0][0] == m[1][1] && m[2][2] == ' '){
				m[2][2] = 'o';
				return 1;
			}
			else if(m[0][0] == 'o' && m[0][0] == m[2][2] && m[1][1] == ' '){
				m[1][1] = 'o';
				return 1;
			}
			else if(m[1][1] == 'o' && m[1][1] == m[2][2] && m[0][0] == ' '){
				m[0][0] = 'o';
				return 1;
			}
			return 0;
		}
	}
	else if (ad ==0){	//Defesa
				//HORIZONTAL
		for (int i = 0; i < DIM; ++i){
			if (m[i][0] == 'x' && m[i][0] == m[i][1] && m[i][2] == ' '){
				m[i][2] = 'o';
				return 1;
			}
			else if (m[i][0] == 'x' && m[i][0] == m[i][2] && m[i][1] == ' '){
				m[i][1] = 'o';
				return 1;
			}
			else if (m[i][1] == 'x' && m[i][1] == m[i][2] && m[i][0] == ' '){
				m[i][0] = 'o';
				return 1;
			}
			//		VERTICAL
			else if (m[0][i] == 'x' && m[0][i] == m[1][i] && m[2][i] == ' '){
				m[2][i] = 'o';
				return 1;
			}
			else if(m[0][i] == 'x' && m[2][i] == m[0][i]&& m[1][i] == ' '){
				m[1][i] = 'o';
				return 1;
			}
			else if(m[1][i] == 'x' && m[1][i] == m[2][i] && m[0][i] == ' '){
				m[0][i] = 'o';
				return 1;
			}

				//DIAGONAL
			else if(m[0][0] == 'x' && m[0][0] == m[1][1] && m[2][2] == ' '){
				m[2][2] = 'o';
				return 1;
			}
			else if(m[0][0] == 'x' && m[0][0] == m[2][2] && m[1][1] == ' '){
				m[1][1] = 'o';
				return 1;
			}
			else if(m[1][1] == 'x' && m[1][1] == m[2][2] && m[0][0] == ' '){
				m[0][0] = 'o';
				return 1;
			}

			return 0;
		}
	}
}

int vencedor(char m[DIM][DIM]){
	for (int i = 0; i < DIM; ++i){
		if ( iguais(m[i][0], m[i][1], m[i][2]) ) return m[i][0];
		if ( iguais(m[0][i], m[1][i], m[2][i]) ) return m[0][i];
	}
	if ( iguais(m[0][0], m[1][1], m[2][2]) ) return m[0][0];
	if ( iguais(m[0][2], m[1][1], m[2][0]) ) return m[0][2];
	return ' ';
}

