#include <stdio.h>
#include <conio.h>
#define DIM 3
#define iguais(a,b,c) (a!=' ' && a==b && b==c)

void exibe(char m[DIM][DIM]){
	_clrscr();
	for (int i = 0; i < DIM; i++){
		printf(" %c | %c | %c \n", m[i][0], m[i][1], m[i][2]);
		if (i<2) puts("---+---+---"); 
	}
}

int vencedor(char m[DIM][DIM]){
	for (int i=0; i < DIM; ++i){
		if (iguais(m[i][0],m[i][1],m[i][2]) ) return m[i][0];
		if (iguais(m[0][i],m[1][i],m[2][i]) ) return m[0][i];
	}
	if (iguais(m[0][0],m[1][1],m[2][2]) ) return m[0][0];
	if (iguais(m[0][2],m[1][1],m[2][0]) ) return m[0][2];
	
	return ' ';
}

int main(void){
	char m[DIM][DIM] = {{' ', ' ', ' '},{' ', ' ', ' '},{' ', ' ', ' '}};
	exibe(m);
	printf("\nVencedor: %c\n\n", vencedor(m));
	puts("");
	return 0;
}
