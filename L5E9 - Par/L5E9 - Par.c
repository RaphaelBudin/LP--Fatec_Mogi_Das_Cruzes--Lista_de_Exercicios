#include <stdio.h>
int par(int n){
	if (n-2 > 2)
		par(n-2);

	if (n%2 == 0)
		return 1;
	return 0;
}

int main(void){
	int n;
	printf("insira o numero para verificar se eh par: ");
	scanf_s("%d", &n);
	(par(n)? puts("Eh par") : puts("Nao eh par"));

	_getch();

	return 0;
}
