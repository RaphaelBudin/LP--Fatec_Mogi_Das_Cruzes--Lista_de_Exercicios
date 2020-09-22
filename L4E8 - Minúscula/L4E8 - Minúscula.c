#include <stdio.h>
#define defInvalido ((c>=65 && c<=90) || (c>=97 && c<=122))


char minuscula(char c){
	if (c>=65&&c<=95)
		c+=32;
	return c;
}

int caractereValido (char c){
	return (defInvalido);
}

/*COM VALIDAÇÃO
char insereCaractere(){
	char c;
	do{
		if (caractereValido(c))
			puts("NUMERO INVALIDO");
		printf("Insira uma letra : ");
		scanf_s("%d", &c);
	} while defInvalido;
	return c;
}*/

int main(void){
	char c;
	puts("Programa para transformar a letra em minuscula");
	printf("\nInsira a letra que deseja converter: ");
	scanf_s("%c", &c);
	if (caractereValido(c))
		printf("Letra minuscula: %c\n",minuscula(c));
	else
		puts("Caractere invalido");
	return 0;
}
