#include <stdio.h>

void preenche(float v[]){
	for (int i=0; i < 7; ++i){
		printf("Insira temperatura dia %d\n", 1+i);
		scanf_s("%f", &v[i]);
	}	
}

float media(float v[]){
	float media = 0;	
	for (int i =0; i < 7; ++i){
		media+= v[i];
	}
	return (media /= 7); 
}

int conta(float v[], float media){
	int acima = 0;
	for (int i =0; i < 7; ++i){
		if (v[i] > media)
			++acima;
	}	
	return acima;
}


int main(void){
	puts("Programa le temperatura 7 dias");

	float v[7];
	preenche(v);
	float m = media(v);
	
	printf("Media : %.1f %cC\n", m, 248);
	printf("Dias acima da media: %d\n", conta(v,m));

	
	return 0;
}
