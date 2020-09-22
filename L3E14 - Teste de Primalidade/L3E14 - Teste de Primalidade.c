#include <stdio.h>
#include <math.h>

int main(void){
	
	int numero = 0, raizQuadrada = 0, divisor = 2;
	printf("Informe um numero: ");
	scanf("%d", &numero);
	raizQuadrada = sqrt(ceil(numero));

	for (divisor = 2; divisor <= numero-1; ++divisor)
		if (numero%divisor==0) 
			break;

	if (numero == divisor) 	puts("E primo!");
	else 					puts("Nao e primo");

	return 0;
}
