#include <stdio.h>


int main(void){

	unsigned int conta = 0, soma = 0, n = 0, resto = 0;
	//OK

	puts("Informe numero da conta: ");
	scanf("%d", &conta);
	n = conta;

	while (n>0){
		soma += n%10;
		n/= 10;
	}
	
	resto = soma%10;

	printf("Numero da Conta: %d-%d\n", conta, resto);



	return 0;
}
