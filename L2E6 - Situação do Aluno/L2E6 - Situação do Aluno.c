#include <stdio.h>

int main(void){

	int faltas = 0;
	float media = 0;

	puts("Insira sua media: ");
	scanf("%f", &media);
	puts("Insira numero de faltas: ");
	scanf("%d", &faltas);

	if ((media >= 6) && (faltas <= 5)) 	{_textcolor(9); puts("Aprovado");}
	else								 {_textcolor(12); puts("Reprovado");}

	return 0;
}
