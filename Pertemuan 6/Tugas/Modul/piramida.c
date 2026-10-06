#include <stdio.h>

int main(void)
{
    int tinggi = 5;
    int baris;
    int spasi;
    int simbol;

    for (baris = 1; baris <= tinggi; baris++)
    {
        for (spasi = 1; spasi <= tinggi - baris; spasi++)
        {
            printf(" ");
        }

        for (simbol = 1; simbol <= 2 * baris - 1; simbol++)
        {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}