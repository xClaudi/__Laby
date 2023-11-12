#include <stdio.h>

int main() {
    int liczba, suma = 0, ilosc = 0, maksymalna = -1;  

    printf("Podawaj liczby, wpisz wartosc mniejsza od 0 aby zakonczyc:\n");

    do {
        printf("Podaj liczbe: ");
        scanf("%d", &liczba);

        if (liczba >= 0) {
            suma += liczba;
            ilosc++;

            if (liczba > maksymalna) {
                maksymalna = liczba;
            }
        }

    } while (liczba >= 0);

    if (ilosc > 0) {
        double srednia = (double)suma / ilosc;

        printf("Suma: %d\n", suma);
        printf("Srednia: %.2lf\n", srednia);
        printf("Wartosc maksymalna: %d\n", maksymalna);
    }
    else {
        printf("Nie wprowadzono zadnej liczby dodatniej.\n");
    }

    
}
