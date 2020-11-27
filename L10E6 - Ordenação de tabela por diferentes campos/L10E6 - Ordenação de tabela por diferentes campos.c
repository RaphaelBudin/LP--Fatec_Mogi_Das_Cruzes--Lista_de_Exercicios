#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define DIM 6

typedef struct funcionario{
	unsigned int codigo;
	char *nome;
	double salario;
} Func;

typedef void (*Compara)(Func[],int,int); //Transformei o Ponteiro de Função em um tipo de dados e apelido

_Bool nomeMaior(char *s1, char *s2){
	int i = 0;
	for (; s1[i] && s2[i]; ++i){
		if (s1[i] == s2[i]) 	//Letras iguais
			continue;
		else if (s1[i] == ' ')  //Quer dizer que o primeiro nome da pessoa é mais curto, logo é menor 
			return 0; 
		else if (s2[i] == ' ')  //"		"		"		"		"		"		"		"		"
			return 1;
		else if (s1[i] > s2[i]) //Código da primeira letra é maior que o da segunda
			return 1;
		else if (s2[i] > s1[i]) //Código da segunda letra é maiorq ue o da primeira
			return 0;
	}
	if (strlen(s1) > strlen(s2)) return 0; //Caso tenha chegado aqui, uma das strings tem menos caracteres que a outra, logo a que tiver menos caracteres é a string menor lexicamente
	return 1;
}

void cmp_c(Func v[DIM], int i, int j){
	if (v[i].codigo > v[j].codigo){
		Func temp = v[i];
		v[i] = v[j];
		v[j] = temp;
	}
}

void cmp_n(Func v[DIM], int i, int j){
	if (nomeMaior(v[i].nome, v[j].nome)){
		Func temp = v[i];
		v[i] = v[j];
		v[j] = temp;
	}	
}

void cmp_s(Func v[DIM], int i, int j){
	if (v[i].salario > v[j].salario){
		Func temp = v[i];
		v[i] = v[j];
		v[j] = temp;
	}	
}

void ordena(Compara cmp, Func v[], int n){
	for (int i = 0; i < n-1; i++){
		for (int j = i+1; j < n; ++j){
			cmp(v,i,j);	
		}	
	}
}

void exibe(Func v[], int n){
	for (int i = 0; i < n; i++)
		printf("%d - %s - %.2f\n", v[i].codigo, v[i].nome, v[i].salario);	
}

int main(void){
	Func v[DIM] = {
		{561, "Eva Maranhao", 9200.00}, 
		{295, "Ana Teixeira", 6100.00},
		{295, "Anaa Teixeira", 6100.00}, 
		{473, "Denise Lagoa", 8500.00}, 
		{102, "Catia Telles", 7300.00}, 
		{384, "Beatriz Lira", 5400.00}};
	
	Compara cmp = &cmp_c;
	//if (cmp == NULL) puts("Erro ao declarar cmp!");

	printf("Ordenar por:\n1-Codigo\n2-Nome\n3-Salario\nOpcao: ");
	switch(getchar()){		//OBSERVAÇÃO: a função aqui é de obter um char, e não um int, logo case 1 é diferente de case '1'
		case '1': cmp = &cmp_c;
				puts("\nOrganizado por Codigo !");
				//ordena(cmp, v, DIM);
				break;
		case '2': cmp = &cmp_n;
				puts("\nOrganizado por Nome !");
				break;
		case '3': cmp = cmp_s;
				puts("\nOrganizado por Salario !");
				break;
	}
	ordena(cmp,v,DIM);
	exibe(v,DIM);
	puts("");
	return 0;	
}
