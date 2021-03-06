#include <stdio.h>
#include <assert.h>
#include <math.h>

typedef struct ponto {
	int x;
	int y;
} Ponto;

Ponto le_ponto(int pontoEscolhido){
	assert(pontoEscolhido == 1 || pontoEscolhido == 2);
	int x = 0, y = 0;
	if (pontoEscolhido == 1){
		puts("Ponto A");
		printf("Insira coordenada X e Y do ponto A: ");
		scanf("%i,%i", &x, &y);
		setbuf(stdin,NULL);
	}
	else if (pontoEscolhido == 2){
		puts("Ponto B");
		printf("Insira coordenada X e Y do ponto B: ");
		scanf("%i,%i", &x, &y);
		setbuf(stdin,NULL);
	}
	
	Ponto temp = {x,y};
	return temp;
}

//Usando float porque int não produz o restultado certo - ele zera
float distancia (Ponto a, Ponto b){
	return sqrt(  pow((b.x-a.x),2) + pow((b.y-a.y),2)  );
}

int main(void){
	
	Ponto a = le_ponto(1);
	Ponto b = le_ponto(2);
	printf("A: x = %i e Y = %i\n", a.x,a.y);
	printf("B: x = %i e Y = %i\n", b.x,b.y);
	printf("Distancia: %.1f\n", distancia(a,b));
	return 0;
}
