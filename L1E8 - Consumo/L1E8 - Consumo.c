#include <stdio.h>

int main(void){

	float distancia, litros, cTotal;
	printf("Insira a distancia, depois insira os litros usados\n");
	scanf("%f %f", &distancia, &litros);

	cTotal = litros/distancia;
	printf("Consumo: %.2f litros por km\n", cTotal);

	return 0;
}
