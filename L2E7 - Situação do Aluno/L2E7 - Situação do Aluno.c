#include <stdio.h>

int main(void){
	
	float media;
	int faltas;

	puts("Insira sua media: ");
	scanf("%f", &media);
	puts("Insira numero d faltas: ");
	scanf("%d", &faltas);

	if ((media >=4.0) && (faltas<=5)){
		if (media<6.0) {_textcolor(8); puts("Recuperacao");}
		else		{_textcolor(10); puts("Aprovado");}
	}
	else {_textcolor(12); puts("Reprovado");}

	return 0;
}
