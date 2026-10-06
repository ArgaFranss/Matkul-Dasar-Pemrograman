#include <stdio.h>

int main()
{
    int bilangan;

    printf("Masukkan bilangan: ");
    scanf("%d", &bilangan);

    if (bilangan > 0)
    {
        printf("Kategori: Bilangan positif\n");
    }
    else if (bilangan < 0)
    {
        printf("Kategori: Bilangan negatif\n");
    }
    else
    {
        printf("Kategori: Nol\n");
    }

    return 0;
}