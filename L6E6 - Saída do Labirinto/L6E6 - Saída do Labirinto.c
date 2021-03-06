#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>
#define MAX 15

void gera(int m[][MAX]) {
	int temp = 0, i = 0, j = 0;

	for (i = 0; i < MAX; i++) {
		for (j = 0; j < MAX; ++j) {
			if ((i <= MAX && j == 0) || (i == 0 && j <= MAX) || j == MAX - 1 || i == MAX - 1)
				m[i][j] = 0;
			else {
				temp = rand() % 100 + 1;
				if (temp <= 75)
					m[i][j] = 1;
				else
					m[i][j] = 0;
			}
		}
	}
	//Blocos de entrada/saída e o bloco na frente deles estarão sempre desobistruídos
	m[1][0] = 1; m[1][1] = 1;
	m[MAX - 2][MAX - 1] = 1; m[MAX - 2][MAX - 2] = 1;

}

//0 é o quadrado branco (parede) , 1 é o preto (caminho livre)
void exibe(int m[][MAX]) {
	for (int i = 0; i < MAX; i++) {
		for (int j = 0; j < MAX; ++j) {

			printf("%s", m[i][j] ? "  " : "\xDB\xDB");
		}
		puts(" ");
	}
}

void mostra(char c, int i, int j){
	_gotoxy(2*j+1, i+1); printf("%c%c\b",c,c); //lembrando que _gotoxy(coluna,linha)
	_sleep(1);
}

int sai(int m[MAX][MAX], int i, int j){
	m[i][j] = 2; //Recebe 2 para não ser confundido com outros objetos que são tratados como 0 (parede) ou 1 (caminho livre)
	mostra('\xB0',i,j); //Irá mandar um retângulo translúcido para a função mostra, na posição atual

	//Primeira coisa é verificar se chegamos na saída, caso sim, finalizar a recursão
	//if (i==MAX-1 && j==MAX-2) return 1;
	//if (i ==MAX-2 && j==MAX-2) return 1;
	if (i == MAX-2 && j==MAX-1) return 1;

	//Agora vamos verificar se é possível dar um passo para cada lado
	
	//Teste para ir pra DIREITA
	if (m[i][j+1] == 1 && sai(m,i,j+1) ) return 1;
	//Ele verificará se a próxima coluna a direita é um caminho livre
	//	&&
	//Se a função sai() com a posição atualizada irá retornar verdadeiro

	//Teste para ir pra BAIXO
	if (m[i+1][j] == 1 && sai(m,i+1,j) ) return 1;

	//Teste para ir pra ESQUERDA
	if (m[i][j-1] == 1 && sai(m,i,j-1)  )  return 1;

	//Teste para ir pra CIMA
	if (m[i-1][j] == 1 && sai(m,i-1,j) ) return 1;

	
	

	//Caso nada dê certo, essa árvore de possibilidades deu errado
	//mostra(' ',i,j);
	return 0;
}

int main(void) {
	int m[MAX][MAX];
	srand(time(NULL));

	gera(m);
	exibe(m);
	sai(m,1,0);

	_getch();
	return 0;

}
