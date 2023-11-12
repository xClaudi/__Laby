#include <stdio.h>

int main() {
    
    printf("Ciag 1: ");
    for (int i = 1; i <= 100; ++i) {
        printf("%d, ", i);
    }
    printf("\n");

   
    printf("Ciag 2: ");
    for (int i = 100; i >= 0; --i) {
        printf("%d, ", i);
    }
    printf("\n");

    
    printf("Ciag 3: ");
    for (int i = 7; i <= 77; i += 7) {
        printf("%d, ", i);
    }
    printf("\n");

    
    printf("Ciag 4: ");
    for (int i = 20; i >= 0; i -= 2) {
        printf("%d, ", i);
    }
    printf("\n");

   
}
