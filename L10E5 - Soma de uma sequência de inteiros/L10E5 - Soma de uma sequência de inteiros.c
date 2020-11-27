#include <stdio.h>
#define DIM 3
float soma (float v[], int dim){
	float sum = 0;
	for (int i = 0; v[i]; ++i){
		sum += v[i];	
	}
	return sum;	
}


int main(void){
	float v[DIM] = {2.5,1.5,3.0};
	printf("%.1f\n", soma(v,DIM));
	
	puts("");
	return 0;	
}
