#include <stdio.h>
#include <stdlib.h>
#include <time.h>



int main(void){

	int coordX = 1, coordY = 1, direcaoX = -1, direcaoY = -1, cor = 1; //direcao positiva vai pra frente, negativa para trás
	do{
		_gotoxy(coordX,coordY);
		printf("O\b");
		_sleep(1);
		printf(".");
		if (coordX==1 || coordX == 80) { direcaoX*=-1; ++cor; if (cor > 18) cor = 1; _textcolor(cor);}
		if (coordY==1 || coordY == 24) { direcaoY*=-1; ++cor; if (cor > 18) cor = 1; _textcolor(cor);}
		coordX+=direcaoX;
		coordY+=direcaoY;

	} while (!_kbhit());

	return 0;
}
