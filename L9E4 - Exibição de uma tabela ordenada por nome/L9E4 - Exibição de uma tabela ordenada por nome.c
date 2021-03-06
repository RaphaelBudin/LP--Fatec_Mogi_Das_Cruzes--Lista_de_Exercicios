#include <stdio.h>
#include <string.h>
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

void trocaPosFunc (Funcionario vetorFunc[], int pos1, int pos2){
	Funcionario temp;
	temp.codigo = vetorFunc[pos1].codigo;
	strcpy (temp.nome, vetorFunc[pos1].nome);
	temp.salario = vetorFunc[pos1].salario;
	temp.admissao.dia = vetorFunc[pos1].admissao.dia;
	temp.admissao.mes = vetorFunc[pos1].admissao.mes;
	temp.admissao.ano = vetorFunc[pos1].admissao.ano;

	vetorFunc[pos1].codigo = vetorFunc[pos2].codigo;
	strcpy(vetorFunc[pos1].nome, vetorFunc[pos2].nome);
	vetorFunc[pos1].salario = vetorFunc[pos2].salario;
	vetorFunc[pos1].admissao.dia = vetorFunc[pos2].admissao.dia;
	vetorFunc[pos1].admissao.mes = vetorFunc[pos2].admissao.mes;
	vetorFunc[pos1].admissao.ano = vetorFunc[pos2].admissao.ano;

	vetorFunc[pos2].codigo = temp.codigo;
	strcpy(vetorFunc[pos2].nome, temp.nome);
	vetorFunc[pos2].salario = temp.salario;
	vetorFunc[pos2].admissao.dia = temp.admissao.dia;
	vetorFunc[pos2].admissao.mes = temp.admissao.mes;
	vetorFunc[pos2].admissao.ano = temp.admissao.ano;

}

void ordenaTabBSort(Funcionario vetorFuncionarios[], int numeroFuncionarios){
	for (int i = 1; i <= numeroFuncionarios-1; i++){
		for (int j = 0;  j < numeroFuncionarios-i; j++){
			if (strcmp(vetorFuncionarios[j].nome,vetorFuncionarios[j+1].nome) > 0 ){
				trocaPosFunc (vetorFuncionarios, j, j+1);
			}
		}
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

	printf("\n\nAgora organizado por codigo...\n\n\n");
	ordenaTabBSort(vetFunc, TAMANHO_VETOR);
	exibetab(vetFunc, TAMANHO_VETOR);

	return 0;
}
