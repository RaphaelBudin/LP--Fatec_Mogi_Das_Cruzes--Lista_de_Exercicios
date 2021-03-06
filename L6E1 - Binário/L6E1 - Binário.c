#include <stdio.h>

void binario(int numero) {

	int vetor[32] = { 0 };
	int i = 0;

	while (numero / 2 != numero) {
		vetor[i] = numero % 2;
		numero /= 2;
		++i;
	}

	printf("Em binario: ");
	for (--i; i >= 0; --i)
		printf("%d", vetor[i]);

}

int main(void) {
	int numero;
	while (1) {
		printf("\nNumero: ");
		scanf_s("%d", &numero);
		binario(numero);
	}
	return 0;
}
