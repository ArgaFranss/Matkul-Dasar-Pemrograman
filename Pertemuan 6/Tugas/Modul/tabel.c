#include <stdio.h>

int main(void)
{
    int batas;
    int baris;
    int kolom;

    do
    {
        printf("Masukkan batas 1-15: ");
        scanf("%d", &batas);
    } while (batas < 1 || batas > 15);

    printf("%5s", "+");

    for (kolom = 1; kolom <= batas; kolom++)
    {
        printf("%5d", kolom);
    }

    printf("\n");

    for (baris = 1; baris <= batas; baris++)
    {
        printf("%5d", baris);

        for (kolom = 1; kolom <= batas; kolom++)
        {
            printf("%5d", baris + kolom);
        }

        printf("\n");
    }

    return 0;
}