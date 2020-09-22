#include <stdio.h>

int calcularFatorial(int n){
	if (n ==2)
		return 2;
	else
		return n*(calcularFatorial(n-1));
}

int main(void){
	int n = 0;
	puts("Calcular fatorial");
	printf("Insira o numero inteiro: ");
	scanf_s("%d", &n);
	printf("\nFatorial de %d %c %d\n", n, 130, calcularFatorial(n));
	return 0;
}
