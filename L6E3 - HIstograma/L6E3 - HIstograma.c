#include <stdio.h>
#include <conio.h>

const int GREEN = 2;
const int BLUE = 1;
const int RED = 4;

void preenche(float v[]){
	for (int i=0; i < 7; ++i){
		printf("\nInsira temperatura dia %d: ", 1+i);
		scanf_s("%f", &v[i]);
	}	
}

float media(float v[]){
	float media = 0;	
	for (int i =0; i < 7; ++i){
		media+= v[i];
	}
	printf("\nMedia : %.2f\n", media/7);
	return (media /= 7); 
}

void histograma(float v[], float media){

	for (int d = 0; d < 7 ; ++d){
		switch(d){
			case 0: printf("D: "); break;
			case 1: printf("S: "); break;
			case 2: printf("T: "); break;
			case 3: printf("Q: "); break;
			case 4: printf("Q: "); break;
			case 5: printf("S: "); break;
			case 6: printf("S: "); break;
		}
		if (v[d] == media)
			_textcolor(GREEN);
		else {
			(v[d] < media ? _textcolor(BLUE) : _textcolor(RED));
		}
		for (int i = 0; i < (int)v[d]; ++i){
			printf("%c", 220);
		}
		puts("\n");
	}
}

int main(void){
	float v[7];
	preenche(v);

	histograma(v,media(v));

	return 0;
}
