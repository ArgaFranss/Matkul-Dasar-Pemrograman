#include <stdio.h>

int main()
{
    int nilai1;
    int nilai2;
    int nilai3;
    int nilai4;
    int nilai5;
    int jumlah;

    printf("Nilai 1: ");
    scanf("%d", &nilai1);

    printf("Nilai 2: ");
    scanf("%d", &nilai2);

    printf("Nilai 3: ");
    scanf("%d", &nilai3);

    printf("Nilai 4: ");
    scanf("%d", &nilai4);

    printf("Nilai 5: ");
    scanf("%d", &nilai5);

    jumlah = nilai1 + nilai2 + nilai3 + nilai4 + nilai5;

    printf("\nJumlah nilai  : %d\n", jumlah);
    printf("Rata-rata     : %.2f\n", (double)jumlah / 5);

    return 0;
}