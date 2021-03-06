#include <stdio.h>
#include <string.h>

void bsort(char arr[][8], int n) {
	char temp[8];

	// Sorting strings using bubble sort 
	for (int j = 0; j < n - 1; j++)
	{
		for (int i = j + 1; i < n; i++)
		{
			if (strcmp(arr[j], arr[i]) > 0)
			{
				strcpy_s(temp, sizeof(temp) ,arr[j]);
				strcpy_s(arr[j], sizeof(arr[j]), arr[i]);
				strcpy_s(arr[i], sizeof(arr[i]), temp);
			}
		}
	}
}

void exibe(char vetorStrings[][8], int numeroString) {
	for (int i = 0; i < numeroString; ++i) {
		for (int j = 0; j < 8; ++j) {
			printf("%c", vetorStrings[i][j]);
		}
		puts("");
	}
	puts("");
}


int main(void) {
	char v[][8] = { "Eduardo",
					"Catia",
					"Ana",
					"Denise",
					"Beatriz" };

	bsort(v, 5);
	exibe(v, 5);
	_getch();

	return 0;
}
