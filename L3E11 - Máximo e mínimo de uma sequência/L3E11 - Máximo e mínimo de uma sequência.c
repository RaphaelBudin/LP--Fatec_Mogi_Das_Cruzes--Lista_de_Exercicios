#include <stdio.h>
#include <limits.h>

int main(void){

	int min = INT_MAX, max = INT_MIN, numero;
	puts("Informe uma sequencia de numeros naturais");
	puts("Insira 0 qualquer momento para terminar");

	while(1) {
		scanf("%d", &numero);
        if (numero == 0)
            break;
		else if (numero < min)
			min = numero;
		else 
			max = numero;

	}

	printf("Numero maximo: %d\n Numero Minimo: %d\n", max, min);


	return 0;
}
