#include <stdio.h>


int valida(int dia, int mes, int ano){

	if (mes==2)
		return (dia<=29&&mes<=12);
	else
		return (dia<=31&&mes<=12);

}


int main(void){
	
	int dia=0, mes=0, ano=0;

	puts("Infome uma data no seguinte formato: ");
	puts("Dia (enter) Mes (enter) Ano (enter)");
	scanf("%d %d %d", &dia, &mes, &ano);

	printf("%d\n", valida(dia,mes,ano));


	return 0;
}
