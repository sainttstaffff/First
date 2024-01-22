#include <stdio.h>
#include <locale.h>

void go_south_east(int *lat, int *lon)
{
	*lat = *lat - 1;
	*lon = *lon + 1;
}

int main()
{
	// установим локаль
	// ророоророр
	setlocale(LC_ALL, "Russian");
	int latitude = 32;
	int longtude = -64;
	go_south_east(&latitude, &longtude);
	printf("Стоп!Теперь наши координаты: [%i, %i]|\n",
		latitude, longtude);
	return 0;
}