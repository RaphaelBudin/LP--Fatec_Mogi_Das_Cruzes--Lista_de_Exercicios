#include <stdio.h>


float chutarRaizQuadrada(float r){

    float raiz = r;
   
    for (int n = 0; n < 10; ++n){
          raiz = raiz/2 + r/(2*raiz);
			if (1.0/(raiz*raiz-(raiz/2))<0.001){
			break;
		}
	}
           
    return(raiz);    
}


	


int main(void){

	float raiz = 0;
	puts("Insira um numero para calcular a raiz aproximada: ");
	scanf("%f", &raiz);

	printf("A raiz aproximada eh : %.6f\n", chutarRaizQuadrada(raiz));
	

	return 0;
}
