#include <stdio.h>

int main(void){

	float numR = 0, total = 1;
	int pot = 0;

	puts("Insira um numero: ");
	scanf("%f", &numR);
	puts("Insira a potencia: ");
	scanf("%d",&pot);

	for (int i = pot; i > 0; --i){
		total *= numR;
	}

	printf("Pot %.2f\n", total);

	return 0;
}
