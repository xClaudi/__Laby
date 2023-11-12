#include <stdio.h>

int main() {
	int liczba1;
	int liczba2;
	printf("Podaj liczbe.\n");
	scanf("%d", &liczba1);
	printf("Podaj nastepna liczbe.\n");
	scanf("%d", &liczba2);
	printf("Jakie z podanych dzialan chcesz wykonac?.\n");
	printf("1 - Dodawanie.\n");
	printf("2 - Odejmowanie.\n");
	printf("3 - Dzielenie.\n");
	printf("4 - Mnozenie.\n");
	int wybor;
	scanf("%d", &wybor);
	switch (wybor){
	case 1:
		printf("Wynik dodawania: %d.\n", liczba1 + liczba2);
		break;
	case 2:
		printf("Wynik odejmowania: %d.\n", liczba1 - liczba2);
		break;
	case 3:
		if (liczba2 != 0) {
			printf("Wynik dzielenia: %f.\n", liczba1 / liczba2);
		}
		else {
			printf("Dzielenie przez zero jest niedozwolone.\n");
		}
		break;
	case 4:
		printf("Wynik mnozenia: %d", liczba1 * liczba2);
		break;
	default:
		printf("Wybrano niepoprawna opcje.\n");
	}
}
