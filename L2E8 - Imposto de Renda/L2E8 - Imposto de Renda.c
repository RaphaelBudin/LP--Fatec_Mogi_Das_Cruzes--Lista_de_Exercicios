#include <stdio.h>

int main(void){

	float salario, imposto;
	puts("Informe seu salario:");
	scanf("%f", &salario);


//while (!sair){
	
	if (salario <= 1903.98) puts ("Isento!");
	else{
		if (salario <= 2826.65){
			imposto = salario*(7.5/100);
			printf("Aliquota: 7,5\%. Imposto: %.2f\n", imposto);
		}
		else if (salario <= 3751.05){
			imposto = salario*(15.0/100);
			printf("Aliquota: 15\%. Imposto: %.2f\n", imposto);
		}
		else if (salario <=4664.68){
			imposto = salario*(22.5/100);
			printf("Aliquota: 25,5\%. Imposto: %.2f\n", imposto);
		}
		//else if (salario == 0 || salario == -1) sair = true;
		else{
			imposto = salario*(27.5/100);
			printf("Aliquota: 27,5\%. Imposto: %.2f\n", imposto);
		}
	}
//}


	return 0;
}
