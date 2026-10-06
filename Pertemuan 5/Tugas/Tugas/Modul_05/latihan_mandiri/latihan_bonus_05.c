#include <stdio.h>

int main() {
    int bilangan, sisa, jumlah = 0;

    printf("Masukkan bilangan: ");
    scanf("%d", &bilangan);

    sisa = bilangan;

    while (sisa > 0) {
        jumlah += sisa % 10;
        sisa /= 10;
    }

    printf("========================================\n");
    printf("         JUMLAH DIGIT BILANGAN          \n");
    printf("========================================\n");
    printf("Bilangan        : %d\n", bilangan);
    printf("Jumlah Digit    : %d\n", jumlah);
    printf("========================================\n");

    return 0;
}