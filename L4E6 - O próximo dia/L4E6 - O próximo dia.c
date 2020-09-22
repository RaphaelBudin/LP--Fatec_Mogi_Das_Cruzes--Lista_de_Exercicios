#include <stdio.h>

void mostrarData(int dia, int mes, int ano) {
	switch (mes) {
		case 1: 		printf("Dia %d de Janeiro de %d\n", dia, ano);			break;
		case 2:			printf("Dia %d de Fevereiro de %d\n", dia, ano);		break;
		case 3:			printf("Dia %d de Mar%co de %d\n", dia, 135, ano);		break;
		case 4:			printf("Dia %d de Abril de %d\n", dia, ano);			break;
		case 5:			printf("Dia %d de Maio de %d\n", dia, ano);				break;
		case 6:			printf("Dia %d de Junho de %d\n", dia, ano);			break;
		case 7:			printf("Dia %d de Julho de %d\n", dia, ano);			break;
		case 8:			printf("Dia %d de Agosto de %d\n", dia, ano);			break;
		case 9:			printf("Dia %d de Setembro de %d\n", dia, ano);			break;
		case 10:		printf("Dia %d de Outubro de %d\n", dia, ano);			break;
		case 11:		printf("Dia %d de Novembro de %d\n", dia, ano);			break;
		case 12:		printf("Dia %d de Dezembro de %d\n", dia, ano);			break;
		default: printf("Data inserida invalida"); 
	}
	puts("\n");
}

// --------------------- VALIDAÇÃO -----------------------
//BISSEXTO
int validaBissexto(int ano) {
	return (ano % 400 == 0 || (ano % 100 != 0 && ano % 4 == 0));
}

int insereValidaBissexto() {
	int ano = 1;
	int bissexto = 0;
	do {
		if(ano>1)
			puts("VALOR INVALIDO");

		puts("Insira um ano maior que 0:");
		scanf_s("%d", &ano);
	} while (ano < 1);
	bissexto = validaBissexto(ano);
	(bissexto ? (puts("\nEh bissexto\n")) : (puts("\nNao eh bissexto\n")));
	return bissexto;
}

//ÚLTIMO DIA DO MÊS
int retornaUltimoDiaMes(int mes, int ano) {
	int bissexto = validaBissexto(ano);
	if (mes == 2 && bissexto)
		return 29;
	else if (mes == 2 && !bissexto)
		return 28;
	else if ((mes <= 7 && mes % 2 != 0) || (mes >= 8 && mes % 2 == 0))
		return 31;
	else
		return 30;
}
//Insere info - Textos


//ANO - Maior que 0
int validaAno(int ano) {	
	return (ano >= 1);
}
//ANO - Maior que 0 - Com texto
int validaAnoTexto(int ano) {
	if (ano < 1) {
		puts("ANO INVALIDO - Ano inferior a 1");
		return 0;
	}
	puts("\nANO - OK");
	return 1;
}
//ANO - Insere e Valida Ano
int insereValidaAno() {
	int ano = 1;
	do {
		if (ano<1)
			printf("INVALIDO - Insira ano maior que 0");
		printf("\nInsira o ANO: ");
		scanf_s("%d", &ano);
	} while (!validaAno(ano));
	return ano;
}
//MES - Entre 1 e 12
int validaMes(int mes) {
	return (mes>=1 && mes<=12);
}
//MES - Entre 1 e 12 - Com texto
int validaMesTexto(int mes) {
	if (mes < 1) {
		puts("MES INVALIDO - Mes menor que 1");
		return 0;
	}
	else if (mes > 12) {
		puts("MES INVALIDO - Mes maior que 12");
		return 0;
	}
	puts("\nMES - OK");
	return 1;
}
//MES - Insere e Valida Mes
int insereValidaMes() {
	int mes = 1;
	do {
		if (mes < 1 || mes > 12)
			puts("INVALIDO - Insira mes entre 1-12");
		printf("Insira o MES: ");
		scanf_s("%d", &mes);
	} while (!validaMes(mes));
	return mes;
}

//DIA- Valida dia - maior que 1 menor igual  29, 30 ou 31
int validaDia(int dia, int mes, int ano) {
	return (dia>=1 && dia<=retornaUltimoDiaMes(mes,ano));
}
//DIA - Valida dia TEXTO - maior que 1 menor igual  29, 30 ou 31
int validaDiaTexto(int dia, int mes, int ano) {
	int ultimoDia = retornaUltimoDiaMes(mes, ano);
	if (dia < 1) {
		puts("DIA INVALIDO - Dia menor que 1");
		return 0;
	}
	else if (dia > ultimoDia) {
		printf("DIA INVALIDO - Dia maior que %d permitido no mes %d\n", ultimoDia, mes);
		return 0;
	}
	puts("\nDIA - OK\n");
	return 1;
}
//DIA - INSERE valida DIA
int insereValidaDia(int mes, int ano) {
	int dia = 1;
	do {
		if (dia < 1 || dia > 31)
			puts("INVALIDO - Insira um dia valido para o mes correspondente");
		printf("Informe o DIA - ");
		scanf_s("%d", &dia);
	} while (!validaDiaTexto(dia, mes, ano));
	return dia;
}
//VALIDA COMPLETO - INÚTIL se o DIA já foi validado
int validaCompleto(int dia, int mes, int ano) {
	return (validaDia(dia,mes,ano) && validaMes(mes) && validaAno(ano));
}
//VALIDA COMPLETO C/ TEXTO - INÚTIL se o DIA já foi validado
int validaCompletoTexto(int dia, int mes, int ano) {
	if (validaDia(dia, mes, ano) && validaMes(mes) && validaAno(ano)) {
		puts("DIA, MES e ANO - OK");
		return 1;
	}
	return 0;
}

//EXIBE PRÓXIMO DIA
void exibe_ds(int dia, int mes, int ano) {
	if (!validaDia(dia, mes, ano)) {
		printf("Valores invalidos - Nao %c possivel continuar", 130);
	}
	else { //Valores válidos
		int ultimoDia = retornaUltimoDiaMes(mes, ano);
		if (dia == ultimoDia) {
			dia = 1;
			++mes;
			mostrarData(dia, mes, ano);
		}
		else {
			++dia;
			mostrarData(dia, mes, ano);
		}
	}
}

int retornaUltimoDiaMesTexto() {
	int ano = insereValidaAno();
	int mes = insereValidaMes();
	int ultimoDia = retornaUltimoDiaMes(mes, ano);
	printf("\nUltimo dia do mes %c - %d\n", 130, ultimoDia);
	return ultimoDia;
}

int retornarOpcaoMenu() {
	int opcao = 1;
	do {
		if (opcao < 1 || opcao > 4) {
			puts("OPCAO INVALIDA - Insira um numero entre 1 e 4");
		}
		puts("FUNCOES:\n");
		puts("1. VALIDA - Insere uma data e verifica se ela eh valida");
		puts("2. ULTIMO DIA - Informa o ultimo dia do mes em deteminado ano");
		printf("3. BISSEXTO - Informa se o ano %c bissexto\n", 130);
		puts("4. EXIBE DATA SEGUINTE - Exibe a data seguinte ao dia informado");
		puts("9. SAIR");
		printf("Sua opcao .......       :");
		scanf_s("%d", &opcao);
	} while (opcao < 1 || (opcao>4 && opcao != 9));
	return opcao;
}



int main(void) {
	int ano = 0, dia = 0, mes = 0, opcao=0, sair = 0;
	puts("Programa de DATAS");

	
	while (!sair) {
		opcao = retornarOpcaoMenu();
		switch (opcao) {
		case 1: //VALIDA
			ano = insereValidaAno();
			mes = insereValidaMes();
			dia = insereValidaDia(mes, ano);	break;
		case 2: //ULTIMO DIA
			retornaUltimoDiaMesTexto();			break;
		case 3: //BISSEXTO
			insereValidaBissexto();				break;
		case 4: //EXIBE DATA SEGUINTE
			ano = insereValidaAno();
			mes = insereValidaMes();
			dia = insereValidaDia(mes, ano);
			exibe_ds(dia, mes, ano);			break;
		case 9: //SAIR
			sair = 1;							break;
		}
	}
	return 0;
}
