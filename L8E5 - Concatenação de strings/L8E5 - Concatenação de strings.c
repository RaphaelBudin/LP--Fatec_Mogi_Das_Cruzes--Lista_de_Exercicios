#include <stdio.h>
#include <string.h>

void cat(char original[], char emenda[]){
	int ultimaPosicaoOriginal = 0;
	int ultimaPosicaoEmenda = 0;
	
	//Uso while para contar quantas posições existem antes de chegar no '\0'
	while (original[ultimaPosicaoOriginal] != '\0')
		++ultimaPosicaoOriginal;
	while (emenda[ultimaPosicaoEmenda] != '\0')
		++ultimaPosicaoEmenda;

	//Variável 'i' irá pegar todos os caracteres da emenda[]
	//original[] irá receber os novos caracteres 
	for (int i = 0; i <= ultimaPosicaoEmenda; ++i){
		original[ultimaPosicaoOriginal]= emenda[i];
		++ultimaPosicaoOriginal;
	}
}

int main(void){
	char v[10] = "aba";
	char w[10] = "cate";
	cat(v,w);
	puts(v);
	_getch();
	return 0;
}
