#include <stdio.h>

int main(void){

	while (!_kbhit()){
		puts("TESTE");
	}

	_getch();

	return 0;
}
