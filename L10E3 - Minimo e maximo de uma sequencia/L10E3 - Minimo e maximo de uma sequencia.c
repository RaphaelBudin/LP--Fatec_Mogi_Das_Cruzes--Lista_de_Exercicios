#include <stdio.h>
#define DIM 5

void minmax(int v[], int n, int *min, int *max){
	for (int i = 1; i < n; ++i){
		if (v[i] < v[i-1])
			*min = v[i];
		if (v[i] > v[i-1])
			*max = v[i];
	}
}

int main(void){
	int v[DIM] = {26,55,89,14,77};
	int min, max;
	minmax(v,DIM, &min, &max);
	printf("Min: %i\n", min);
	printf("Max: %i\n", max); 	
	puts("");
	return 0;
}
