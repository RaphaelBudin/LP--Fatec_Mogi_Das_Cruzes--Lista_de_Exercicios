#include <stdio.h>

void upr(char v[]){
	for (int i = 0; v[i] != '\0'; ++i){
		if (v[i] >= 97 && v[i] <= 122)
			v[i] -= 32;
	}
}

int main(void){
	char v[10] = "Teste";
	upr(v);
	puts(v); //TESTE;
	_getch();

	return 0;
}
