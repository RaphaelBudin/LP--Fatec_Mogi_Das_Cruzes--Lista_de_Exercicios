#include <stdio.h>

void exibe(char vetorStrings[][8], int numeroString){
	for (int i = 0; i < numeroString; ++i){
		for (int j = 0; j < 8; ++j){
			printf("%c", vetorStrings[i][j]);
		}
		puts("");
	}
	puts("");
}

int main(void){
	char v[][8] = {"Eduardo",
					"Catia",
					"Ana",
					"Denise",
					"Beatriz"};
	//5 nomes no vetor
	exibe(v, 5);
	_getch(0);


	return 0;
}
