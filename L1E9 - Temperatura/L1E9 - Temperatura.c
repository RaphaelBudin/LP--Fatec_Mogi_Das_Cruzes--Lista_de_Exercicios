#include <stdio.h>

int main(void){
	
	float c, f;
	printf ("Programa Conversao de Farenheit para Celsius\n");
	printf("Informe a temperatura em Farenheit:\n");
	scanf("%f", &f);
	c = (f-32)*(5.0/9.0);
	printf("Celsius = %.2f\n", c);

	return 0;
}
