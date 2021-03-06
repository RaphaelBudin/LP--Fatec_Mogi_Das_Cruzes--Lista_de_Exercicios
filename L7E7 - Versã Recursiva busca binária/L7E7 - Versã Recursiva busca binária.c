#include <stdio.h>

int rbsearch(int numeroAlvo, int v[], int posicaoInicial, int tamanhoVetor) {
	int posicaoMedia = (posicaoInicial + tamanhoVetor) / 2;

	//Condição de Falha
	if (posicaoInicial > tamanhoVetor) return 0;
	//if (posicaoInicial <= tamanhoVetor){
	//Condição de Sucesso
	else if (numeroAlvo == v[posicaoMedia])	return 1;

	//Primeira metade
	else if (numeroAlvo < v[posicaoMedia]) 	return rbsearch(numeroAlvo, v, posicaoInicial, posicaoMedia-1);
	//Segunda metade
	else if (numeroAlvo > v[posicaoMedia]) 	return rbsearch(numeroAlvo, v, posicaoMedia+1, tamanhoVetor );
	
}




int main(void) {
	int v[8] = {19,27,31,48,52,66,75,80 };
	printf("27: %d\n", rbsearch(27, v, 0, 8));
	printf("51: %d\n", rbsearch(51, v, 0, 8));
	printf("80: %d\n", rbsearch(80, v, 0, 8));
	printf("95: %d\n", rbsearch(95, v, 0, 8));
	printf("0: %d\n", rbsearch(0, v, 0, 8));
	printf("-5: %d\n", rbsearch(-5, v, 0, 8));
	return 0;
}
