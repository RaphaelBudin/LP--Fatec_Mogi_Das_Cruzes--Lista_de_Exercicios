#include <stdio.h>
#include <math.h>

//Função que transforma os números em formato de string para formato int
int val( char s[]){
	//Importante notar que para converter o caractere, é necessário
	//subtrair 48 do char para se chegar ao equivalente em int
	// Isso pode ser feito subtraindo '0' do caractere


	int resultado = 0;

	//Explicação:
	//Sempre vai pegar o resultado existente, multiplicar por 10
	//Isso irá fazer o(s) digito(s) no 'resultado' andarem uma casa decimal para a direita
	//Depois irá somar o dígito atual

	//Exemplo:
	// string = '351' ; resultado = 0;
	// resultado = 0 * 10 + 3;
	// resultado == 3
	// resultado = 1 * 10 + 5
	// resultado == (3*10)+5 == 30 + 5 == 35
	// resultado = 2 * 10 + 1
	// resultado = (35*10) + 1 == 350 + 1 == 351

	for (int i = 0; s[i] != '\0'; ++i) {
		resultado = resultado * 10 + s[i] - '0';
	}

	return resultado;
	
}

int main(void){
	char v[] = "351";
	printf("Valor: %d\n", 2*val(v)); //702
	_getch();
	 
	return 0;
}
