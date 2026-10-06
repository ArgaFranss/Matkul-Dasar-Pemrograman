#include <stdio.h>

int main(void)
{
    int tahun_lahir;
    int tahun_sekarang;
    int usia;

    printf("Masukkan tahun lahir: ");
    scanf("%d", &tahun_lahir);

    printf("Masukkan tahun sekarang: ");
    scanf("%d", &tahun_sekarang);

    usia = tahun_sekarang - tahun_lahir;

    printf("\nTahun lahir anda: %d\n", tahun_lahir);
    printf("Tahun sekarang: %d\n", tahun_sekarang);
    printf("Perkiraan usia: %.d\n", usia);

    return 0;
}