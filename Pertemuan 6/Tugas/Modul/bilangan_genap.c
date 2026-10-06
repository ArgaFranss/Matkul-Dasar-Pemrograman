#include <stdio.h>

int main(void)
{
    int n;
    int m;
    int i;
    int j;
    int total_sel = 0;
    int jumlah_genap = 0;

    scanf("%d", &n);
    scanf("%d", &m);

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= m; j++)
        {
            total_sel++;

            if ((i * j) % 2 == 0)
            {
                jumlah_genap++;
            }
        }
    }

    printf("========================================\n");
    printf(" BILANGAN GENAP DALAM TABEL \n");
    printf("========================================\n");
    printf("Jumlah baris : %d\n", n);
    printf("Jumlah kolom : %d\n", m);
    printf("----------------------------------------\n");
    printf("Total sel : %d\n", total_sel);
    printf("Jumlah hasil kali genap : %d\n", jumlah_genap);
    printf("========================================\n");

    return 0;
}