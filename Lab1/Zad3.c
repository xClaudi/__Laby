#include <stdio.h>

int main()
{
	float liczba1;
	float liczba2;
	printf("Podaj liczbe po przecinku.\n");
	scanf("%f", &liczba1);
	printf("Podaj nastepna liczbe po przecinku.\n");
	scanf("%f", &liczba2);
	if (liczba1 > liczba2) {
		printf("Podana liczba jest wieksza: %f.\n", liczba1);
	}
	else {
		printf("Podana liczba jest wieksza: %f.\n", liczba2);
	}
}
