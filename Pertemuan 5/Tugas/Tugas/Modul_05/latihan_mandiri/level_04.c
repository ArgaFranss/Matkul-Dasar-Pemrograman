#include <stdio.h>

int main()
{
    long bilangan;
    long hasil = 0;
    int digit;

    printf("Masukkan bilangan: ");
    scanf("%ld", &bilangan);

    while (bilangan > 0)
    {
        digit = bilangan % 10;
        hasil = hasil * 10 + digit;
        bilangan = bilangan / 10;
    }

    printf("Bilangan terbalik: %ld", hasil);

    return 0;
}