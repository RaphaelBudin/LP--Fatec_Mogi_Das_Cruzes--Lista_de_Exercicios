#include <stdio.h>

int main(void){
	
	float peso, altura, imc;
	puts("Infome seu peso, e logo apos a sua altura em metros:");
	scanf("%f %f", &peso, &altura);

	imc = peso/(altura*altura);

	if (imc >= 18.5 && imc <= 30)
		puts("IMC Normal");
	else if (imc < 18.5)
		puts("IMC - Magra");
	else if (imc > 30)
		puts ("IMC - Obesa");


	return 0;
}
