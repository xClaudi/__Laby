#include <stdio.h>

int main() {
    int n;
    int suma_punktow = 0;
    int liczba_punktow;
    int liczba_studentow = 0;

    printf("Podaj liczbe studentow: ");
    scanf("%d", &n);

    while (liczba_studentow < n) {
        printf("Podaj liczbe punktow dla studenta %d: ", liczba_studentow + 1);
        scanf("%d", &liczba_punktow);

        suma_punktow += liczba_punktow;
        liczba_studentow++;
    }

    if (n > 0) {
        float srednia = (float)suma_punktow / n;
        printf("Srednia liczba punktow w grupie wynosi: %.2f\n", srednia);
    }
    else {
        printf("Nie ma studentow w grupie.\n");
    }

    
}
