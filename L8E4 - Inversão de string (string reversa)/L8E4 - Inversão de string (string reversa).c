#include <stdio.h>
#include <string.h>

void rev(char v[]) {
	int i = 0, j = 0;
	char temp[513];
	
	
	for (; v[i] != '\0'; ++i) {
		temp[i] = v[i];
	}
	temp[i] = '\0';

	//--i para pular o caractere de finalização
	for (--i; i >= 0; --i) {
		v[j] = temp[i];
		++j;
	}
	v[j] = '\0';
}

int main(void) {
	char v[10] = "ROMA";
	rev(v);
	puts(v);
	_getch();

	return 0;
}
