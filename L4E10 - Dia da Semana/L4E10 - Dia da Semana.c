#include <stdio.h>

void dds(int n){
	switch(n){
		case 1: puts("Domingo\n"); break;
		case 2: puts("Segunda\n"); break;
		case 3: puts("Terca\n"); break;
		case 4: puts("Quarta\n"); break;
		case 5: puts("Quinta\n"); break;
		case 6: puts("Sexta\n"); break;
		case 7: puts("Sabado\n"); break;
		default: puts("Valor invalido. Abortando programa...\n"); exit(1); 
	}
}

int main(void){
	int nDia = 0;
	while(1){
		puts("Exibe por extenso o dia da semana");
		puts("Insira um numero entre 1-7 para obter o dia da semana por extenso (insira 0 para cancelar): ");
		scanf_s("%d", &nDia);
		dds(nDia);
	}
	return 0;
}
