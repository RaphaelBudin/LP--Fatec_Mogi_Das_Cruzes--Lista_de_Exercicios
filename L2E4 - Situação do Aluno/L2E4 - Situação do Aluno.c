#include <stdio.h>

int main(void){

	float n1, n2, media;
	printf("Insira nota das provas: ");
	scanf("%f %f", &n1, &n2);
	media = (n1 + n2)/2;

	if (media>=6) printf("Aprovado, Media :  %.2f\n", media);
	else printf("Reprovado. Media : %.2f\n", media);


	return 0;
}
