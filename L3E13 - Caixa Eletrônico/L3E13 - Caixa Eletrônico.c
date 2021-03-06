#include <stdio.h>

float inserirQuantia(){
	float quantia = 0.0;
	
	printf("Informe a quantidade (0 para cancelar): ");
	scanf("%f", &quantia);
	while(quantia <0){
		puts("INVALIDO");
		printf("Insira um valor positivo, ou 0 para cancelar: ");
		scanf("%f", &quantia);
	}
	
	return quantia;
}

void msgSucesso(short int op){

	if (op == 1)
		puts("Deposito efetuado com sucesso! Aperte 3 para ver o saldo...");
	else if (op == 2)
		puts("Saque efetuado com sucesso! Aperte 3 para ver o saldo...");
}

int main(void){

	float saldoCliente = 1000.00, quantia = 0;
	int opcao = 0, sair = 0;

	while (!sair){
		printf("Menu: \n1 - Deposito\n2- Saque\n3 - Saldo\n4 - Sair\n\n");
		scanf("%d", &opcao);
		
		
		switch(opcao){

			case 1: //DEPOSITO
				printf("DEPOSITO \n");
				quantia = inserirQuantia();
				saldoCliente += quantia;
				msgSucesso(1);
				break;


			case 2: //SAQUE
				printf("SAQUE\n");
				quantia = inserirQuantia();
				while (quantia > saldoCliente){
					puts("Valor excede saldo em conta");
					quantia = inserirQuantia();
				}
				saldoCliente -= quantia;
				msgSucesso(2);
				break;


			case 3: //VER SALDO
				printf("Saldo: %.2f\n\n", saldoCliente);
				break;

			case 4: 
				puts("Saindo do programa..."); sair++; break;
			default: puts("Opcao invalida");
				
		}

	}

	return 0;
}
