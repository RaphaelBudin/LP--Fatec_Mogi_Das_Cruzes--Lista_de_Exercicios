#include <stdio.h>

int len(char v[]){
	int i = 0;
	int num = 0;
	while (v[i] != '\0'){
		num++;
		++i;
	}

	return num;
}

int main(void){
	char v[10] = "avada kedabra";
	printf("Comprimento: %d\n", len(v)); 
	_getch();
	return 0;
}
