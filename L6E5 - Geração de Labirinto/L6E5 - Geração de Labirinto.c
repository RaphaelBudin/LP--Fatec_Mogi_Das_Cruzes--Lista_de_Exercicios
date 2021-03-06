#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>
#define MAX 15

void gera(int m[][MAX]) {
	int temp = 0, i = 0, j = 0;
	
	for (i = 0; i < MAX; i++) {
		for ( j = 0; j < MAX ; ++j) {
			if ((i <= MAX && j == 0) || (i == 0 && j <= MAX) || j == MAX-1 || i == MAX-1 )
				m[i][j] = 0;
			else {
				temp = rand() % 100+1;
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

//0 é o quadrado branco, 1 é o preto
void exibe(int m[][MAX]) {
	for (int i = 0; i < MAX; i++) {
		for (int j = 0; j < MAX; ++j) {

			printf("%s", m[i][j] ?  "  " : "\xDB\xDB");
		}
		puts(" ");
	}
}

int main(void) {
	int m[MAX][MAX];
	srand(time(NULL));

	gera(m);
	exibe(m);

	return 0;

}
