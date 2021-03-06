#include <stdio.h>
//Função recursiva de lsearch()

int rlsearch(int numeroAlvo, int v[], int tamanhoVetor){
	if (v[tamanhoVetor-1] == numeroAlvo)
		return 1;
	else if (tamanhoVetor-1 < 0)
		return 0;

	rlsearch(numeroAlvo,v,tamanhoVetor-1);
}


int main(void){
	int v[8] = {19,27,31,48,52,66,75,80};
	printf("27: %d\n", rlsearch(27,v,8));
	printf("51: %d\n", rlsearch(51,v,8));
	/*printf("80: %d\n", rlsearch(80,v,8));
	printf("19: %d\n", rlsearch(19,v,8));
	printf("10: %d\n", rlsearch(10,v,8));
	printf("0: %d\n", rlsearch(0,v,8));
	printf("-5: %d\n", rlsearch(-5,v,8));*/

	return 0;
}
