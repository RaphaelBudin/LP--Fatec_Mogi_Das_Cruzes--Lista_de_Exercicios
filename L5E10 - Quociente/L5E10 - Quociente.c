#include <stdio.h>
 
int quociente(int numerador, int denominador){
     
	static int div = 0;
	
	if (numerador >= denominador){
		quociente(numerador-denominador,denominador);
		++div;
	}
	return div;
}
 
 
int main(void){
    int n, d;
    printf("insira um numero para dividir: ");
    scanf_s("%d", &n);
    printf("insira o divisor : ");
    scanf_s("%d", &d);
    printf("%d\n", quociente(n,d));
 	//quociente(n,d);

    return 0;
}
