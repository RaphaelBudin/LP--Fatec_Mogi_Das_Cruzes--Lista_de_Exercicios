#include <stdio.h>

int main(void){

	int dia, mes, ano, perfil;

	puts ("Informe sua data de nascimento  da seguinte forma: Dia,Mes, Ano");
	puts ("Exemplo: 13/06/1970 ficaria \n13\n06\n1970\n");
	puts ("Informe sua data confome exemplo acima:\n ");
	scanf("%d %d %d", &dia, &mes, &ano);
	perfil = (dia*100+mes)+ano;
	printf("Perfil 1 = %d\n", perfil);
	perfil = (perfil%100) + (perfil/100);
	printf("Perfil 2 = %d\n", perfil);
	perfil = perfil%5;
	printf("Perfil 3 = %d\n", perfil);


	switch(perfil){
		case 0 : puts ("Timido"); break;
		case 1 : puts ("Sonhador"); break;
		case 2 : puts ("Paquerador"); break;
		case 3 : puts("Atraente"); break;
		case 4: puts ("Iressistivel"); break;
		default : puts ("Voce eh incategorizavel"); break;
	}
	

	return 0;
}
