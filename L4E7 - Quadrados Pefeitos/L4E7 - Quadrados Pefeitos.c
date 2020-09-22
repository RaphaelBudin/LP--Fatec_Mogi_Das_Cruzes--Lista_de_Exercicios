#include <stdio.h>

//Funcao calcula os quadrados perfeitos
int quadradoPerfeito(int numero){
	int soma = 0;
	for(int i =1; i <=numero*2; i+=2){
		soma += i;
	}
	return soma;
}

int main(void){
	
	int numero=0;

	while(1){
		puts("\nInsira um numero natural para calcular o seu quadrado perfeito, ou 0 para cancelar");
		scanf("%d", &numero);
		if (numero == 0) break;
		printf("O Quadrado Perfeito de %d %c : %d\n", numero, 130, quadradoPerfeito(numero));
	}

	printf("\n");


	return 0;
}
