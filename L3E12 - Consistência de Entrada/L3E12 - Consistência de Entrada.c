#include <stdio.h>
#include <math.h>
int main(void){
	
	float numero =0, raiz = 0;

	puts("Informe um numero real positivo para calcular a raiz quadrada: ");
	scanf("%f", &numero);
	while (numero <0){
		puts("Numero invalido");
		puts("Informe um numero real positivo: ");
		scanf("%f", &numero);
	}

	raiz = sqrt(numero);
	printf("Raiz quadrada: %.2f\n", raiz);

	return 0;
}
