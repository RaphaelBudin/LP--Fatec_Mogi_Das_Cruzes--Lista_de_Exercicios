#include <stdio.h>

void exibe(int v[], int ateQualPosicao){
	for (int i = 0; i < ateQualPosicao; ++i)
		printf(" %d ", v[i]);
	
	puts("");
}

void troca(int v[], int pos1, int pos2){
	int x = v[pos1];
	v[pos1] = v[pos2];
	v[pos2] = x;
}

void bsort(int v[], int n){
	for (int i =1; i <=n-1; i++){
		for (int j = 0; j < n-1; j++){
			if (v[j]>v[j+1])
				troca(v,j,j+1);
		}
	}
}

int main(void){

	int v[10] = {83,31,91,46,27,20,96,25,96,80};
	bsort(v,10);
	exibe(v,10);


	return 0;
}
