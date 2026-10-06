#include <stdio.h>

int main(void)
{
    int baris;
    int kolom;
    int i;
    int j;
    char karakter;

    do
    {
        printf("Masukkan jumlah baris : ");
        scanf("%d", &baris);
    } while (baris < 1 || baris > 20);

    do
    {
        printf("Masukkan jumlah kolom : ");
        scanf("%d", &kolom);
    } while (kolom < 1 || kolom > 20);

    printf("Masukkan karakter : ");
    scanf(" %c", &karakter);

    for (i = 1; i <= baris; i++)
    {
        for (j = 1; j <= kolom; j++)
        {
            printf("%c ", karakter);
        }
        printf("\n");
    }

    return 0;
}