#include <stdio.h>

int main(void){

	int n = -1;
	puts("Informe o ULTIMO NUMERO da placa do seu carro:" );
	scanf("%d", &n);
	
	switch(n){
		case 0 : puts("Segunda-feira"); break;
		case 1 : puts("Segunda-feira"); break;
		case 2 : puts("Terca-feira"); break;
		case 3 : puts("Terca-feira"); break;
		case 4 : puts("Quarta-feira");  break;
		case 5 : puts("Quarta-feira"); break;
		case 6 : puts("Quinta-feira"); break;
		case 7 : puts("Quinta-feira"); break;
		case 8 : puts("Sexta-feira"); break;
		case 9 : puts("Sexta-feira"); break;
	}
	
	return 0;
}
