/*
Nama : Fransiskus Reikinata Koesprasetyo
NIM : 2610511036
Kelas : B
Modul : 2
Deskripsi : Program menghitung estimasi biaya perjalanan.
*/

#include <stdio.h>

int main(void)
{
    double jarak;
    double konsumsi;
    double harga;
    int penumpang;

    double kebutuhan_bahan_bakar;
    double total_biaya;
    double biaya_per_orang;

    printf("===========================================\n");
    printf("       ESTIMASI BIAYA PERJALANAN\n");
    printf("===========================================\n");

    printf("Masukkan jarak perjalanan (km) : ");
    scanf("%lf", &jarak);

    printf("Masukkan konsumsi kendaraan (km/l) : ");
    scanf("%lf", &konsumsi);

    printf("Masukkan harga bahan bakar per liter : ");
    scanf("%lf", &harga);

    printf("Masukkan jumlah penumpang : ");
    scanf("%d", &penumpang);

    kebutuhan_bahan_bakar = jarak / konsumsi;
    total_biaya = kebutuhan_bahan_bakar * harga;
    biaya_per_orang = total_biaya / penumpang;

    printf("\nHASIL PERHITUNGAN\n");
    printf("-------------------------------------------\n");
    printf("Jarak perjalanan       : %.2f km\n", jarak);
    printf("Kebutuhan bahan bakar  : %.2f liter\n", kebutuhan_bahan_bakar);
    printf("Total biaya            : Rp%.2f\n", total_biaya);
    printf("Biaya per orang        : Rp%.2f\n", biaya_per_orang);
    printf("===========================================\n");

    return 0;
}
