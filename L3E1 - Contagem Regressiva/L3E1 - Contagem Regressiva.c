#include <stdio.h>

int main(void){

	int n;
	puts("Insira um numero inteiro positivo:");
	scanf("%d", &n);

	while (n < 0){
		puts("Numero inserido nao eh positivo. Insira um numero positivo:" );
		scanf("%d", &n);
	}

	for (int i = n; i >= 0; --i){
		printf("%i\n", i);
	}
	


	return 0;
}
