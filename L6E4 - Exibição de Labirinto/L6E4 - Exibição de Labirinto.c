#include <stdio.h>
#define MAX 8
// É necessário especificar as dimensões da matriz, com exceção do valor mais a esquerda
void exibe(int m[][MAX]){
	for (int i = 0; i < 6; ++i){
		for (int j = 0; j < 7; ++j)
			printf("%s", m[i][j] ? "  " : "\xDB\xDB");
		puts(" ");
	}
}


int main(void){
	int m[MAX][MAX] = { {1,1,1,1,1,1,1,1},
						{0,0,1,0,0,0,0,1},
						{1,0,1,0,1,0,1,1},
						{1,0,1,0,1,0,0,1},
						{1,0,0,0,1,1,0,1},
						{1,0,1,0,1,1,0,0},
						{1,1,1,1,1,1,1,1} };
	
	exibe(m);
	/*for (int i = 0; i < 6; ++i){
		for (int j = 0; j < 7; ++j)
			printf("%s", m[i][j] ? "  " : "\xDB\xDB");
		puts(" ");
	}*/
	return 0;
}
