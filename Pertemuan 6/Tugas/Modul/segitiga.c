#include <stdio.h>

int main(void)
{
    int tinggi;
    int baris;
    int kolom;

    do
    {
        printf("Masukkan tinggi: ");
        scanf("%d", &tinggi);
    } while (tinggi < 1);

    for (baris = 1; baris <= tinggi; baris++)
    {
        for (kolom = 1; kolom <= baris; kolom++)
        {
            printf("%d ", baris);
        }
        printf("\n");
    }

    return 0;
}