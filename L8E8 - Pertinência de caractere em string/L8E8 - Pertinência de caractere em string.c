#include <stdio.h>

int pos(char caractere, char string[]){
	
	for (int i = 0; string[i] != '\0'; ++i){
		if (string[i] == caractere)
			return i;
	}
	return -1;
}


int main(void){
	char v[10] = "35171";
	printf("Posicao do 1: %d\n", pos('1', v)); //2
	printf("Posicao do 9: %d\n", pos('9',v));  //-1
	_getch();
	return 0;
}
