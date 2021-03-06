#include <stdio.h>
//*********************************
//			CONSTANTES
//*********************************
const int TAMANHO_VETOR = 5;

//*********************************
//			STRUCTS
//*********************************
typedef struct data {
	int dia;
	int mes;
	int ano;
} Data; 

typedef struct funcionario {
	int codigo;
	char nome[21];
	float salario;
	Data admissao;
} Funcionario;

//*********************************
//			FUNÇÕES
//*********************************

void exibetab(Funcionario v[], int numElementos){
	printf("Numero  Codigo    Nome           Salario   Data de Admissao\n");
	for (int i = 0; i < numElementos; ++i){
		printf("%d         %d     %s    %.2f   %d-%d-%d\n", i+1, v[i].codigo, v[i].nome, v[i].salario, v[i].admissao.dia, v[i].admissao.mes, v[i].admissao.ano);
	}
}

int main(void){
	Funcionario vetFunc [] =
								{{561, "Eva Maranhao", 9200.00, {2,7,2012}},
								{295, "Ana Teixeira", 6100.00, {5,9,2015}},
								{473, "Denise Lagoa", 8500.00, {3,8,2014}},
								{102, "Catia Telles", 7300.00, {3,8,2014}},
								{384, "Beatriz Lira", 5400.00, {4,9,2016}}};
	exibetab(vetFunc, TAMANHO_VETOR);

	return 0;
}
