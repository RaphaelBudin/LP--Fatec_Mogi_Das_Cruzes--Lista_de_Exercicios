#include <stdio.h>

int main(void){
	
	float n1, n2;

	puts("Insira dois numeros para descobrir qual eh o maior: ");
	scanf("%f %f", &n1, &n2);

	if (n1 > n2) printf("Maior: %f\n",n1);
	else printf("Maior: %f\n",n2);


	return 0;
}
