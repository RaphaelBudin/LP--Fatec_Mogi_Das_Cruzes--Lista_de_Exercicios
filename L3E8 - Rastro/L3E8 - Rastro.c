#include <stdio.h>
#include <conio.h>
#include <ctype.h>
#include <stdlib.h>


int main(void){

	int linha = 12, coluna = 40, ativo =1, cor = 1;

	while (1){
		_gotoxy(coluna, linha);
		_textcolor(cor);

		if (ativo!=-1)
			_putch(219);

		switch(toupper(_getch())){
			case 'W': if (linha >1) linha--; break;
			case 'S': if (linha <30) linha++; break;
			case 'D': if (coluna <115) coluna++; break;
			case 'A' : if (coluna > 1) coluna--; break;
			case 'R' : ativo*=-1; break;
			case 'C' : if (cor >= 19) cor = 0; cor++; break;
			case 27: exit(1);
		}

	}


	return 0;
}
