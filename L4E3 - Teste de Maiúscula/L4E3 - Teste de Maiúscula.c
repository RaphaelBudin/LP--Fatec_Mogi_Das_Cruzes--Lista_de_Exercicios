#include <stdio.h>
#define maiuscula(c) (((c)>=65) && ((c)<=90))
//Ele já faz a verificação da expressão automaticamente, não precisa de if-return

int main(void){
	
	char x;
	printf("Caractere? ");
	scanf("%c", &x);
	printf("Maiuscula: %s\n", maiuscula(x) ? "sim" : "nao");

	return 0;
}
