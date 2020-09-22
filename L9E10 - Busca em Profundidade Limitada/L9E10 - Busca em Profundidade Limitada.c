#include <stdio.h>

typedef struct { int origem; int destino; } Via;

//Função para verificar se caminho está livre

/*	Função Rotas

	- Guarda o caminho percorrido
	- Verifica quais posições são válidas como vértice de Origem

*/

int pertence(int vertice, int caminho[], int numElementos) {
	for (int i = 0; i < numElementos; ++i)
		if (vertice == caminho[i]) return 1;
	return 0;
}

void exibe(int caminho[], int numElementos) {
	for (int j = 0; j < numElementos && caminho[j] != 0; j++) printf("%d, ", caminho[j]);
	printf("\b.\n");
}

void rotas(int verticeOrigem, int destinoFinal, Via vetor[], int numElementos, int limite) {
	static int caminho[100], i = 0, profundidade = 0;
	caminho[i++] = verticeOrigem;
	if (verticeOrigem == destinoFinal) exibe(caminho, numElementos);
	else
		for (int j = 0; j < numElementos; j++)
			if (vetor[j].origem == verticeOrigem && !pertence(vetor[j].destino, caminho, i))
				if (profundidade++ <= limite)
					rotas(vetor[j].destino, destinoFinal, vetor, numElementos, limite);

	profundidade = 0;
	--i;
}


int main(void) {
	Via v[10] = { {1,2}, {1,3},
				 {2,1}, {2,4},
				 {3,2}, {3,4},{3,5},
				 {4,3}, {4,5},
				 {5,4} };

	int origem, destino, limite;
	printf("Insira um ponto de origem e outro de destino. Exemplo: 2,5:\n");
	scanf_s("%d, %d", &origem, &destino);
	printf("Insira o limite de profundidade para busca: ");
	scanf_s("%d", &limite);
	rotas(origem, destino, v, 10, limite);
	puts(" ");
	return 0;
}
