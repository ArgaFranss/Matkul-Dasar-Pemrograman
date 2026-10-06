#include <stdio.h>

int main()
{
    int bilangan;
    int ratusan;
    int puluhan;
    int satuan;
    int balik;

    printf("Masukkan bilangan tiga digit: ");
    scanf("%d", &bilangan);

    ratusan = bilangan / 100;
    puluhan = (bilangan / 10) % 10;
    satuan = bilangan % 10;

    balik = (satuan * 100) + (puluhan * 10) + ratusan;

    printf("\nDigit ratusan   : %d\n", ratusan);
    printf("Digit puluhan   : %d\n", puluhan);
    printf("Digit satuan    : %d\n", satuan);
    printf("Bilangan balik  : %d\n", balik);

    return 0;
}