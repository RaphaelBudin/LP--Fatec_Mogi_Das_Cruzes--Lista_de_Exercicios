#include <stdio.h>
#include <math.h>

int main(void){

	//Só funciona quando o resultado não dá em fração, caso contrário ele não informa o valor correto
	
	float a, b, c, r1, r2, delta;

	puts("Informe a, b e c: ");
	scanf("%f %f %f", &a, &b, &c);

	if (a == 0) puts("Valor de A invalido");
	else {
		delta = (b*b) -4.0*a*c;
		if (delta < 0.0) puts ("Nao existe raiz real");
		else {
			r1 = ((-1.0* b) + sqrt(delta)) / 2.0*a;
			r2 = ((-1.0 * b) - sqrt(delta)) / 2.0*a;
			printf("Raiz 1: %.2f . Raiz 2: %.2f\n", r1,r2);
		}
	}

	return 0;
}
