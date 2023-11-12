#include <stdio.h>

int main()
{
	float liczba1;
	float liczba2;
	float liczba3;
	float liczba4;
	float srednia;
	printf("Podaj liczbe po przecinku.\n");
	scanf("%f", &liczba1);
	printf("Podaj nastepna liczbe po przecinku.\n");
	scanf("%f", &liczba2);
	printf("Podaj kolejna liczbe po przecinku.\n");
	scanf("%f", &liczba3);
	printf("Podaj ostatnia liczbe po przecinku.\n");
	scanf("%f", &liczba4);
	srednia = (liczba1 + liczba2 + liczba3 + liczba4) / 4;
	printf("Srednia arytmetyczna tych liczb to: %f.\n", srednia);


}
