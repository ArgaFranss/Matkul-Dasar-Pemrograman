#include <stdio.h>

int main()
{
    float nilai;

    printf("Masukkan nilai: ");
    scanf("%f", &nilai);

    if (nilai < 0)
    {
        printf("Nilai tidak valid.\n");
    }
    else if (nilai > 100)
    {
        printf("Nilai tidak valid.\n");
    }
    else if (nilai >= 85)
    {
        printf("Huruf mutu: A\n");
    }
    else if (nilai >= 75)
    {
        printf("Huruf mutu: B\n");
    }
    else if (nilai >= 65)
    {
        printf("Huruf mutu: C\n");
    }
    else if (nilai >= 50)
    {
        printf("Huruf mutu: D\n");
    }
    else
    {
        printf("Huruf mutu: E\n");
    }

    return 0;
}