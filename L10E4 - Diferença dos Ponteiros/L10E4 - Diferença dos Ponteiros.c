#include <stdio.h>

int len(char *s){
	int comprimento = 0;
	while (*s){
		comprimento++;
		s++;
	}
	return comprimento;	
}

int main(void){
	printf("%d\n", len("teste"));
	puts("");
	return 0;	
}
