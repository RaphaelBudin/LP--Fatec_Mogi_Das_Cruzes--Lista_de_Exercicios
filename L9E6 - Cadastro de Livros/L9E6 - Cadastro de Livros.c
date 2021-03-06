#include <stdio.h>

const int TAMANHO_VETOR = 4;

typedef struct livro {
	char* titulo;
	char* autor;
	unsigned int ano;
} Livro;

void exibetab(Livro v[], int numElementos){
	printf("%15s %20s        %4s\n\n", "Titulo", "Autor", "Ano de Publicacao");
	for (int i = 0; i < numElementos; ++i){
		printf("%15s %20s        %17i    \n", v[i].titulo, v[i].autor, v[i].ano);
	}
	puts("");
}


int main(void){

	Livro vetLivro[] = {{"Frankeinstein", "Mary Sheller", 1818},
						{"Dracula", "Bram Stoker", 1897},
						{"Carmilla", "Sheridam Le Fanu", 1872},
						{"Varney", "Thomas Prest", 1847}};
	exibetab(vetLivro, TAMANHO_VETOR);




	return 0;
}
