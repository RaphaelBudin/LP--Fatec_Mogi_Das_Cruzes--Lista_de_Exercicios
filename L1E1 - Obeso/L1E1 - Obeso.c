#include <stdio.h>

int main(void){

	float peso, altura, imc;
	printf("Insira seu peso, depois sua altura:\n");
	scanf("%f %f", &peso, &altura);
	imc = peso/(altura*altura);

	if (imc <= 30)
		printf("Nao esta obeso. IMC = %.2f\n", imc);
	else
		printf("Esta obeso!IMC = %.2f\n", imc);

	_getch();


	return 0;
}
