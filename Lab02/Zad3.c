#include <stdio.h>

int main() {
    int n;
    int liczba;
    int suma_liczb_parzystych = 0;

    printf("Podaj liczbe elementow w ciagu: ");
    scanf("%d", &n);

    printf("Podaj %d liczb:\n", n);

    for (int i = 0; i < n; ++i) {
        printf("Liczba %d: ", i + 1);
        scanf("%d", &liczba);

        if (liczba % 2 == 0) {
            suma_liczb_parzystych += liczba;
        }
    }

    printf("\nSuma liczb parzystych wynosi: %d\n", suma_liczb_parzystych);


}
