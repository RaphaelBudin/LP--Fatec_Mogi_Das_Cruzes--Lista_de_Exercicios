#include <stdio.h>
#include <conio.h>
#define PVL printf("\n\n\n\n\n\n\n\n\n\n\n")

void centraliza(char string[], int linha){
	//Para fins do exercício:
	// Tela tem 25 linhas e 80 colunas
	// String tem no máximo 80 caracteres

	int tamanhoString = 0;
	while (string[tamanhoString] != '\0')
		++tamanhoString;

	_gotoxy(((80-tamanhoString)/2), linha);
	printf("%s", string); 
	PVL;
}


int main(void){
	char v[] = "Apenas um teste";
	centraliza(v,13);
	_getch();

	return 0;
}
