#include <stdio.h>

int fib(int termo){
	if (termo == 1 || termo == 2)
		return 1;
	else if (termo == 0)
		return 0;

	return fib(termo-1) + fib(termo-2);

}


int main(void){

	int termo;
while(1){

	printf("Insira termo de Fibonacci: ");
	scanf_s("%d", &termo);
	printf("O termo eh %d\n: ", fib(termo));
	}
	return 0;
}
