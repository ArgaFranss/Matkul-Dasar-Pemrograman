#include <stdio.h>

int main() {
    double daya;
    double harga;
    double total;
    
    printf("Masukkan daya (kwh): ");
    scanf("%lf", &daya);

    printf("Masukan Harga per: ");
    scanf("%lf", &harga);

    total = harga * daya;

    printf("\n========================================\n"
            "\t\tSTRUK PEMBELIAN TOKEN\n"
    "========================================\n"
    "Daya (kWh)     : %.2f\n"
    "Harga per kWh  : Rp%.2f\n"
    "----------------------------------------\n"
    "Total Bayar    : Rp%.2f\n"
    "========================================\n"
    "Terima kasih telah menggunakan layanan ini.\n",
    daya, harga, total);

    return 0;
}
