#include <stdio.h>
#include <math.h>

int main(void){
	
	float xp,yp,xq,yq,xm,ym,pq;// xm = cateto oposto & ym = cateto adjacente
	printf("Digite as coordenadas do primeiro ponto: ");
	scanf("%f %f",&xp,&yp);
	printf("Digite as coordenadas do segundo ponto: ");
	scanf("%f %f",&xq,&yq);
	xm=(xp+yp)/2.0;
	ym=(yp+yq)/2.0;
	printf("O cateto oposto ehh: %f\n", xm);
	printf("O cateto adjacente ehhh: %f\n", ym);
	pq = sqrt((pow((xp+xq),2)+pow((yp+yq),2)));
	printf("A hipotenusa ehh: %.2f\n",pq);
	return 0;

}
