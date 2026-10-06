#include <stdio.h>

int main(void)
{
    int baris;
    int kolom;

    for (baris = 1; baris < 5; baris++)
    {
        for (kolom = 1; kolom <= 5; kolom--)
        {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}