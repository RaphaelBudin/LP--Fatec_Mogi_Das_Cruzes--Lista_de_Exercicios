#include <stdio.h>

int cp(int n){
	if (n > 0)
		cp(n-1);
	printf("%d", n);
}

int main(void){
	int n;
	printf("Num? ");
	scanf_s("%d", &n);
	cp(n);
	puts("");

	return 0;
}
