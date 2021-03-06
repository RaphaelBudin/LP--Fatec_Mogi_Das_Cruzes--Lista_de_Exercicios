#include <stdio.h>


void hanoi(int numeroDisco,char origem,char destino,char auxiliar){
	if(numeroDisco==1){ 
		printf("Mova o disco 1 da base %c para a base %c\n",origem ,destino);
		return;
	}
	/*Mover o n-1 disco de A para B, usando C de auxiliar*/
	hanoi(numeroDisco-1,origem,auxiliar,destino);
	/* Mover os discos restantes de A para C*/
	printf("Mova o disco %d da base %c para a base %c\n",numeroDisco,origem,destino);
	/*Mover os n-1 discos de B para C usando A como auxiliar*/
	hanoi(numeroDisco-1,auxiliar,destino,origem);
}

int main(void){
	int argolas = 0;
	printf("Insira o numero de argolas : ");
	scanf("%d", &argolas);
	hanoi(argolas, 'A', 'C', 'B');
	puts("Fim... Aperte alguma tecla para continuar...");
	_getch();


	return 0;
}
