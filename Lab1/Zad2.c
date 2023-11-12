#include <stdio.h>

int main()
{
	int liczba_calkowita;
	printf("Podaj liczbe calkowita.\n");
	scanf("%d", &liczba_calkowita);
	if (liczba_calkowita % 2 == 0) {
		printf("Podana liczba jest parzytsa.\n");
	}
	else
	{
		printf("Podana liczba nie jest parzysta.\n");

	}
}
