#include <stdio.h>

int main(void){

	int fat;

	puts("Insira numero para calculo do fatorial: ");
	scanf("%d", &fat);

	while (fat < 0){
		puts("Numero invalido. Insira um numero positivo: ");
		scanf("%d", &fat);
	}

	for (int i=fat-1; i >= 2; --i){
		fat *= i;
	}

	printf("Fatorial : %d\n", fat); 

	return 0;
}
