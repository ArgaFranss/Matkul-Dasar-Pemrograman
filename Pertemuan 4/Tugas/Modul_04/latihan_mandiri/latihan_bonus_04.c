#include <stdio.h>

int main()
{
    int kecepatan;

    printf("Masukkan kecepatan (km/jam): ");
    scanf("%d", &kecepatan);

    printf("========================================\n");
    printf("            KATEGORI KECEPATAN\n");
    printf("========================================\n");

    printf("Kecepatan       : %d km/jam\n", kecepatan);

    if (kecepatan < 40)
    {
        printf("Kategori        : Lambat\n");
    }
    else if (kecepatan <= 80)
    {
        printf("Kategori        : Sedang\n");
    }
    else if (kecepatan <= 120)
    {
        printf("Kategori        : Cepat\n");
    }
    else
    {
        printf("Kategori        : Sangat Cepat\n");
    }

    printf("========================================\n");

    return 0;
}