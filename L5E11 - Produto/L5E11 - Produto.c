#include <stdio.h>
int produto(int numero, int multiplicador){
	
	static int soma = 0;

	if (multiplicador > 0){
		soma += numero;
		--multiplicador;
		produto(numero,multiplicador);
	}
	return soma;
}


int main(void){
	int numero, multiplicador;
	printf("Insira o numero : ");
	scanf_s("%d", &numero);
	printf("\nInsira o multiplicador: ");
	scanf_s("%d", &multiplicador);
	
	printf("\nProduto: %d\n", produto(numero, multiplicador));

	return 0;
}
