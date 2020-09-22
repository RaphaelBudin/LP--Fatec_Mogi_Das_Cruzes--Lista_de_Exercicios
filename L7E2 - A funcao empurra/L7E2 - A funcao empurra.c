#include <stdio.h>

void exibe(int v[], int tamanhoVetor){
	for (int i = 0; i < tamanhoVetor; ++i)
		printf(" %d ", v[i]);
	puts("");
}

void troca(int v[], int pos1, int pos2){
	int x = v[pos1];
	v[pos1] = v[pos2];
	v[pos2] = x;
}

void empurra(int v[], int tamanhoVetor){
	for (int i = 1; i <= tamanhoVetor-1; ++i){
		if (v[i] < v[i-1]){
			troca(v,i,i-1);
		}
	}
}


int main(void){

	int v[5] = {48,19,31,52,27};
	empurra(v,5);
	exibe(v,5);


	return 0;
}
