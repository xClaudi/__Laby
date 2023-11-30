#include <stdio.h>

int main() {
	float liczba1;
	float liczba2;
	char operator;

	printf("Wybierz dzialanie ktore chcesz wykonac (+, -, *, /).\n");
	scanf("%c", &operator);
	printf("Podaj liczbe.\n");
	scanf("%f", &liczba1);
	printf("Podaj nastepna liczbe.\n");
	scanf("%f", &liczba2);
	


	switch (operator)
	{
	case '+':
		printf("%f + %f = %f\n", liczba1, liczba2, liczba1 + liczba2);
		break;
	case '-':
		printf("%f - %f = %f\n", liczba1, liczba2, liczba1 - liczba2);
		break;
	case '*':
		printf("%f * %f = %f\n", liczba1, liczba2, liczba1 * liczba2);
		break;
	case '/':
		printf("%f / %f = %f\n", liczba1, liczba2, liczba1 / liczba2);


	default:
		printf("Nieprawidlowy znak\n");
		break;
	}
}
