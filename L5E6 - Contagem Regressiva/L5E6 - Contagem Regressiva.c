#include <stdio.h>

int cr(int n){
	if (n >= 1){
		printf("% d ", n);
		cr(n-1);
	}

	return 0;
}

int main(void){
	int n;
	printf("Num? ");
	scanf_s("%d", &n);
	printf("%d ", cr(n));
	puts("");

	return 0;
}
