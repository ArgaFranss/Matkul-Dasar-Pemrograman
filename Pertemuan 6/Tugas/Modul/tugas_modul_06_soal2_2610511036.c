/*
Nama : Fransiskus Reikinata Koesprasetyo
NIM : 2610511036
Kelas : B
Modul : 6
Deskripsi : Program menghitung jumlah nilai diagonal dan non-diagonal
pada matriks perkalian menggunakan nested loop.
*/

#include <stdio.h>

int main(void)
{
    int n;
    int i;
    int j;
    int nilai;
    int total_diagonal = 0;
    int total_non_diagonal = 0;
    int total_keseluruhan = 0;

    printf("========================================\n");
    printf(" DIAGONAL MATRIKS PERKALIAN\n");
    printf("========================================\n");

    printf("Ukuran matriks : ");
    scanf("%d", &n);

    printf("----------------------------------------\n");

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
        {
            nilai = i * j;

            if (i == j)
            {
                total_diagonal += nilai;
            }
            else
            {
                total_non_diagonal += nilai;
            }
        }
    }

    total_keseluruhan = total_diagonal + total_non_diagonal;

    printf("Total diagonal : %d\n", total_diagonal);
    printf("Total non-diagonal : %d\n", total_non_diagonal);
    printf("Total keseluruhan : %d\n", total_keseluruhan);
    printf("========================================\n");

    return 0;
}