#include <stdio.h>

int main(void){

	char c;
	printf("Caractere?\n");
	scanf("%c", &c);
	printf("ASCII em octal = %o\n", c);
	printf("ASCII em decimal = %d\n", c);
	printf("ASCII em Hexadecimal = %X\n", c);


	return 0;
}
