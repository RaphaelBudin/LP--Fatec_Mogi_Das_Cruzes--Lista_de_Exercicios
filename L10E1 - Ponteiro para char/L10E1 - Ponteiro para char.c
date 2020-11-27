#include <stdio.h>

int main(void){
	char x = 'A';
	char *p = &x;
	*p = *p + 3;
	printf("%c\n", x);
	puts("");	
	return 0;
}
