#include <stdio.h>

int main()
{
    int bilangan;
    unsigned long long total = 1;
    int i;

    printf("Masukkan bilangan 0-20: ");
    scanf("%d", &bilangan);

    if (bilangan < 0 || bilangan > 20)
    {
        printf("Input tidak valid.\n");
        return 0;
    }

    for (i = 1; i <= bilangan; i++)
    {
        total = total * i;
    }

    printf("%d! = %llu\n", bilangan, total);

    return 0;
}