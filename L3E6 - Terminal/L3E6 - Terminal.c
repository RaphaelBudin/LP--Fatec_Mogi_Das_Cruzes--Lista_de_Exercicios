#include <stdio.h>

int main(void){
	
	int n = 0, termial = 0;

	puts ("Informe um numero para calculo do termial: ");
	scanf("%d", &n);

	while (n < 0){
		puts("Invalido. Insira numero positivo: ");
		scanf("%d", &n);
	}

	for (int i = 0; i <= n; ++i){
		termial += i;
	}

	printf("Termial : %d\n", termial);



	return 0;
}
