#include <stdio.h>

int main (void){

	float n1, n2, media;
	printf("Insira a primeira nota, depois a segunda\n");
	scanf("%f %f", &n1, &n2);

	media = (n1+n2)/2;
	
	printf("Media : %.2f\n", media);

	return 0;

}
