#include <stdio.h>
#include <string.h>

int main(void){
	char s[513];
	printf("Senha?: ");
	scanf("%s", &s);
	if (strcmp(s, "abracadabra") == 0) puts ("\nSenha correta!");
	else puts("Senha incorreta!");
	_getch();
	return 0;
}
