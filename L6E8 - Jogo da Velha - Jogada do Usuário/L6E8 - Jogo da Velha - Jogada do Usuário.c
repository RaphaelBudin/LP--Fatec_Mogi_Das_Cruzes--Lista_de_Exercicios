#include <stdio.h>
#include <conio.h>
#include <time.h>
#include <stdlib.h>
#define DIM 3
#define iguais(a,b,c) (a!=' ' && a==b && b==c)


void exibe(char m[DIM][DIM]);
void preencheMatriz(char m[DIM][DIM]);
void input(char m[DIM][DIM], char jogador);
int vencedor(char m[DIM][DIM]);

int main(void){
	srand(time(NULL));
	char jogadorX, jogadorO, jogadorVencedor = ' ', atual = 1;
	int jogadas = 0;
	char m[DIM][DIM];
	preencheMatriz(m);
	exibe(m);

	while (jogadas < 9){
		//Jogador X
		if (atual==1){
			input(m,'x');
			++jogadas;
			exibe(m);
			jogadorVencedor = vencedor(m);
			if (jogadorVencedor != ' '){
				printf("Vencedor: %c\n", jogadorVencedor);
				break;
			}
			atual *= -1;
		}

		//Jogador O
		else{
			input(m,'o');
			++jogadas;
			exibe(m);
			jogadorVencedor = vencedor(m);
			if (jogadorVencedor != ' '){
				printf("Vencedor: %c\n", jogadorVencedor);
				break;
			}
			atual *= -1;
		}
	}

	return 0;
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

int vencedor(char m[DIM][DIM]){
	for (int i = 0; i < DIM; ++i){
		if ( iguais(m[i][0], m[i][1], m[i][2]) ) return m[i][0];
		if ( iguais(m[0][i], m[1][i], m[2][i]) ) return m[0][i];
	}
	if ( iguais(m[0][0], m[1][1], m[2][2]) ) return m[0][0];
	if ( iguais(m[0][2], m[1][1], m[2][0]) ) return m[0][2];
	return ' ';
}
