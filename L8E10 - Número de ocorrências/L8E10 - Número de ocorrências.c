#include <stdio.h>

int ocorrencias(char caractere, char string[]){
	int ocorrencias = 0;
	for (int i = 0; string[i] != '\0'; ++i){
		if (caractere == string[i])
			++ocorrencias;
	}

	return ocorrencias;
}

int main(void){
	char v[] = "banana";
	printf("Ocorrencias: %d\n", ocorrencias('a', v)); //3
	_getch();
	return 0;
}
