#include <stdio.h>

int main() {
    int liczba;
    int dodatnie = 0;
    int ujemne = 0;
    int suma_liczb_dodatnich = 0;
    int suma_liczb_ujemnych = 0;

    printf("Podaj 10 liczb:\n");

    for (int i = 0; i < 10; ++i) {
        printf("Liczba %d: ", i + 1);
        scanf("%d", &liczba);

        if (liczba > 0) {
            dodatnie++;
            suma_liczb_dodatnich += liczba;
        }
        else if (liczba < 0) {
            ujemne++;
            suma_liczb_ujemnych += liczba;
        }
    }

    printf("\nIlosc liczb dodatnich: %d\n", dodatnie);
    printf("Suma liczb dodatnich: %d\n", suma_liczb_dodatnich);
    printf("Ilosc liczb ujemnych: %d\n", ujemne);
    printf("Suma liczb ujemnych: %d\n", suma_liczb_ujemnych);

  
}
