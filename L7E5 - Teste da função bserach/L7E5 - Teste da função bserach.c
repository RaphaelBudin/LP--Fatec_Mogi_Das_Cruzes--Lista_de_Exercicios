#include <stdio.h>

int bsearch(int numeroAlvo, int v[], int tamanhoVetor) {
	int posicaoInicialSegmento = 0;	//p
	int posicaoFinalSegmento = tamanhoVetor - 1;	//u

	while (posicaoInicialSegmento <= posicaoFinalSegmento) {
		int posicaoMediaSegmento = (posicaoInicialSegmento + posicaoFinalSegmento) / 2;	//m
		if (numeroAlvo == v[posicaoMediaSegmento]) return 1;
		if (numeroAlvo < v[posicaoMediaSegmento]) posicaoFinalSegmento = posicaoMediaSegmento - 1;
		else posicaoInicialSegmento = posicaoMediaSegmento + 1;
	}
	return 0;
}

int main(Void) {
	int v[8] = { 19,27,31,48,52,66,75,80 };
	printf("27: %d\n", bsearch(27, v, 8));
	printf("51: %d\n", bsearch(51, v, 8));
	return 0;
}
