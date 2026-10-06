#include <stdio.h>

int main() {
    int bilangan;
    
    printf("Masukkan sebuah bilangan: ");
    scanf("%d", &bilangan);

    if (bilangan % 2 == 0) {
        printf("%d adalah bilangan genap.\n", bilangan);
    } else {
        printf("%d adalah bilangan ganjil.\n", bilangan);
    }

    printf("bilangan %d %% 2 == 0\n", bilangan);
    return 0;
}