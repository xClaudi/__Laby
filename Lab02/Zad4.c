#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <Windows.h>

int main() {
    int n;
    int liczba;
    int suma_liczb_parzystych = 0;

    printf("Podaj liczbe elementow w ciagu: ");
    scanf("%d", &n);

 
    srand(time(NULL));

    printf("Losowane liczby z przedzialu (-10, 45):\n");

    for (int i = 0; i < n; ++i) {
        liczba = rand() % 56 - 10; 
        printf("%d ", liczba);

        if (liczba % 2 == 0) {
            suma_liczb_parzystych += liczba;
        }
    }

    printf("Suma liczb parzystych wynosi: %d\n", suma_liczb_parzystych);

    
}
