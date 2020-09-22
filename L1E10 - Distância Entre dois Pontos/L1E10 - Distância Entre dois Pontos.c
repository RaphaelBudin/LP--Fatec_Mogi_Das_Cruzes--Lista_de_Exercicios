#include <stdio.h>
#include <math.h>

int main(void){

	int xp, yp, xq, yq, distancia = 0, catO, catA, hipo;
	
	printf("Informe as coordenadas do ponto de partida: ");
	printf("X: ");
	scanf("%d", &xp);
	printf("Y: ");
	scanf("%d", &yp);
	printf("Coordenadas no ponto de destino: ");
	printf("X: ");
	scanf("%d", &xq);
	printf("Y: ");
	scanf("%d", &yq);

	distancia += abs(xp-xq) + abs(yp-yq);

	printf("Distancia em pontos cartesianos: %d \n",distancia);

	hipo = sqrt((pow((xp+xq),2)+pow((yp+yq),2)));
	printf("Hipotenusa : %d\n", hipo);


	return 0;
}
