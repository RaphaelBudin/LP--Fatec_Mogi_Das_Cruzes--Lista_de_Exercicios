#include <stdio.h>

int main(void){
	
	float perimetro, raio;
	printf("Raio?:\n");
	scanf("%f", &raio);
	
	perimetro = 2*3.14*raio;
	printf("Perimetro = %.2f\n", perimetro);

	return 0;

}
