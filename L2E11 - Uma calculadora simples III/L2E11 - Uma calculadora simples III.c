#include <stdio.h>

int main(void){

	float x, y;
	char o;
	printf("Expressao? ");
	scanf("%f %c %F",&x, &o, &y);
	
	switch( o ) {
		case '+' : printf ("Valor = %.2f\n", x+y); break;
		case '-' : printf ("Valor = %.2f\n", x-y); break;
		case '*' : printf ("Valor = %.2f\n", x*y); break;
		case 'x' : printf ("Valor = %.2f\n", x*y); break;
		case 'X' : printf ("Valor = %.2f\n", x*y); break;
		case '/' : 
				if (y == 0) puts ("Nao ha divisao por 0");
				else printf ("Valor = %.2f\n", x/y);
				break;
					
		case ':' : printf ("Valor = %.2f\n", x/y); break;
		
		default : printf("Operador Invalido: %c\n", o);

	}

	return 0;
}
