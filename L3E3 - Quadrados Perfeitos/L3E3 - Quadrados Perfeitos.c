#include <stdio.h>

int main(void){

	int n, soma = 0;

	puts("Insira algum numero para calcular o quadrado: ");
	scanf("%d", &n);

	for (int i=n*2; i >=1;--i){
		if (i % 2 != 0){
			soma+=i;
			printf("i = %d\n", i);}
	}

	printf("Soma: %d\n", soma);

	return 0;
}
