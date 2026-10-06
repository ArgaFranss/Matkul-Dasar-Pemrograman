#include <stdio.h>

    int main(void)
{
    double saldo_awal;
    double saldo;
    double suku_bunga;
    int jumlah_bulan;
    int bulan;

    printf("Masukkan saldo awal: ");
    scanf("%lf", &saldo_awal);
    
    printf("Masukkan suku bunga (dalam persen): "); 
    scanf("%lf", &suku_bunga);

    printf("Masukkan jumlah bulan: ");
    scanf("%d", &jumlah_bulan);

    saldo = saldo_awal;

    for (bulan = 1; bulan <= jumlah_bulan; bulan++)
    {
        saldo = saldo + (saldo * suku_bunga / 100);
    }

    printf("========================================\n");
    printf("        SIMULASI TABUNGAN BERBUNGA\n");
    printf("========================================\n");
    printf("Saldo awal      : Rp%.2f\n", saldo_awal);
    printf("Suku bunga      : %.2f%% per bulan\n", suku_bunga);
    printf("Jumlah bulan    : %d\n", jumlah_bulan);
    printf("----------------------------------------\n");
    printf("Saldo akhir     : Rp%.2f\n", saldo);
    printf("========================================\n");

    return 0;
}

