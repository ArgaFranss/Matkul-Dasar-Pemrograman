#include <stdio.h>

int main() {
    int bilangan;
    int jumlah_genap = 0;
    int jumlah_ganjil = 0;
    int total_genap = 0;
    int total_ganjil = 0;
    int i;


    printf("Masukkan n: ");
    scanf("%d", &bilangan);
    
    for (i = 1; i <= bilangan; i++)
        {
            if (i % 2 == 0)
            {
                jumlah_genap++;
                total_genap += i;
            }
            else
            {
                jumlah_ganjil++;
                total_ganjil += i;
            }
        }

    printf("\nJumlah bilangan genap: %d", jumlah_genap);
    printf("\nJumlah bilangan ganjil: %d", jumlah_ganjil);
    printf("\nTotal bilangan genap : %d", total_genap);
    printf("\nTotal bilangan ganjil: %d", total_ganjil);
    
    return 0;
}