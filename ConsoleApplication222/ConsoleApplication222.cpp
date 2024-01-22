#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Russian");
	int contestants[] = { 1, 2, 3 };
	int* choise = contestants;

	contestants[0] = 2;
	contestants[1] = contestants[2];
	contestants[2] = *choise;

	printf("Я собираюсь выбрать президента № %i\n", contestants[2]);
	return 0;
}