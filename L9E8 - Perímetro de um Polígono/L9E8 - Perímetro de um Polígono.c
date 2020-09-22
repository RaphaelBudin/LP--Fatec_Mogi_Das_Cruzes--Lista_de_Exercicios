#include <stdio.h>
#include <math.h>

typedef struct ponto{
	int x;
	int y;
} Ponto;

float diferenca (Ponto a, Ponto b){
	return sqrt (   pow(b.x-a.x,2) + pow(b.y-a.y,2)  );
}

float perimetro(Ponto vet[], int numElementos){
	float soma = 0;
	for (int i = 1; i < numElementos; ++i){
		soma += diferenca(vet[i-1], vet[i]);
	}
	soma += diferenca(vet[numElementos-1], vet[0]);
	return soma;
}

int main(void){
	Ponto v[4] = {{0,2},{2,2},{2,0},{0,0}};
	printf("Perimetro: %.1f\n", perimetro(v,4));

	return 0;
}
