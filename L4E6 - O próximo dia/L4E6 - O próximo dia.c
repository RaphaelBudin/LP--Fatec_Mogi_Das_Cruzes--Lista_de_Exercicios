#include <stdio.h>

//Avalia o ano - Retorna 1 para válido e 0 para inválido
_Bool validaAno(int ano){
	if (ano < 0){
		puts("Ano deve ser maior ou igual a zero!");
		return 0;
	}
	return 1;
}

//Avalia o ano se é bissexto - Retorna 1 para bissexto e 0 para não-bissexto
_Bool ehBissexto(int ano){
	printf("Eh bissexto? %s \n", (!(ano%400) || ((ano%100) && !(ano%4)))? "Sim" : "Nao");
	return ( !(ano%400) || ( (ano%100) && !(ano%4) ));
//	Equivalente a:
//	return (ano%400==0 || (ano%100!= 0 && ano%4==0));
}

//Avalia o mês - Retorna 1 para válido e 0 para inválido
_Bool validaMes(int mes){
	if (mes < 1 || mes > 12){
		puts("Mes deve estar no intervalo 1-12");		
		return 0;
	}
	return 1;
}

//Avalia o dia - Retorna 1 para válido e 0 para inválido
_Bool validaDia(_Bool bissexto, int ano, int mes, int dia){
	puts("Validando dia...");
	if (dia < 1){
		puts("Dia invalido, nao existe dia menor que 1 !"); 
		return 0;
	}
	if (dia > 31){
		puts("Dia invalido, nao existe dia maior que 31!"); 
		return 0;
	}
	else if (bissexto && mes == 2){
		if (dia > 29){
			puts("Dia invalido! Dia maximo para fevereiro no ano informado: 29");
			return 0;
		}
	}
	else if (!bissexto && mes == 2){
		if (dia > 28) {
			puts("Dia invalido! Dia maximo fevereiro no ano informado: 28");
			return 0;
		}
	}

	else if ((mes==4 || mes==6 || mes==9 || mes==11) && dia > 30){
		printf("Dia invalido, o mes %d so vai ate o dia 30! \n", mes); 
		return 0;
	}
	puts("Dia validado com sucesso!...");
	return 1;
}

//Lê, valida e retorna um ano (int)
int insereAno(void){
	int ano; 
	do{
		printf("Insira um ano : ");
		scanf("%d", &ano);
	} while (!validaAno(ano));
	return ano;
}

//Lê, valida e retorna um mes (int)
int insereMes(void){
	int mes;
	do{
		printf("Insira um mes : ");
		scanf("%d", &mes);
	}while(!validaMes(mes));
	return mes;
}

//Lê, valida e retorna um dia (int)
int insereDia(int ano, int mes){
	int dia;
	do{
		printf("Insira um dia : ");
		scanf("%d", &dia);
	}while(!validaDia(ehBissexto(ano), ano, mes, dia));
	return dia;
}

//Converte o número do mês e retorna na string por extenso
char *stringMes(int mes){
	switch(mes){
		case 1: return "Janeiro";
		case 2: return "Fevereiro";
		case 3: return "Marco"; 	
		case 4: return "Abril"; 	
		case 5: return "Maio"; 		
		case 6: return "Junho"; 	
		case 7: return "Julho"; 	
		case 8: return "Agosto"; 
		case 9: return "Setembro";
		case 10: return "Outubro";
		case 11: return "Novembro"; 
		case 12: return "Dezembro";
		default:puts("Algo tem errado na funcao stringMes()");
	}
}

//Calcula o próximo dia, incluindo passar ao próximo mês ou ao próximo ano
void proximoDia(_Bool bissexto, int ano, int mes, int dia){
	//Se for o último dia do ano, pula para o primeiro dia do próximo ano
	if (dia==31 && mes==12)
		printf("Proximo dia: %d de %s de %d \n",1,stringMes(1),ano+1);

	//No último dia de fevereiro, pula para 1 de março
	if ((mes==2 && !bissexto && dia==28) || (mes==2 && bissexto && dia == 29))
		printf("Proximo dia: %d de %s de %d \n",1,stringMes(mes+1),ano);

	//Pula próxio dia - mesmo mês
	//Todo mes, exceto fevereiro, vai até o dia 30
	else if (mes != 2 && dia <= 29)
		printf("Proximo dia : %d de %s de %d \n", dia+1, stringMes(mes), ano);	

	//Pula para o próximo mês
	//Meses até 30
	else if ((mes==4 || mes==6 || mes==9 || mes==11) && (dia==30))
		printf("Proximo dia: %d de %s de %d \n", 1,stringMes(mes+1),ano); 

	//Proximo dia - mesmo mes
	//		ou
	//Pula para o próximo mês
	//Meses até 31
	else{
		//Dia 29 já foi
		//Próximo dia - mesmo mês
		if (dia==30) 
			printf("Proximo dia: %d do %s de %d \n", dia+1,stringMes(mes),ano);

		else if (dia==31)
			//Pula para o próximo mês
			printf("Proximo dia: %d do %s de %d \n", 1,stringMes(mes+1),ano);
	}
}

_Bool continuar(void){
	_Bool resposta = 0;
	printf("Deseja continuar? :" );
	scanf("%i", &resposta);
	return resposta;
}

int main(void) {
	int ano, mes, dia;
	_Bool bissexto;
  	do {
		puts("");
		ano = insereAno();
		bissexto = ehBissexto(ano);
		mes = insereMes();
		dia = insereDia(ano,mes);
		proximoDia(bissexto, ano, mes, dia);
		puts("");
	} while(continuar());
	return 0;
}	
