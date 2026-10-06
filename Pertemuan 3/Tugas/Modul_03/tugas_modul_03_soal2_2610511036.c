/*
Nama : Fransiskus Reikinata Koeprasetyo
NIM : 2610511036
Kelas : B
Modul : 3
Deskripsi : Program menghitung kecepatan rata-rata perjalanan.
*/

#include <stdio.h>

int main()
{
    int jarak;
    int waktu;
    double kecepatan;

    printf("Masukkan jarak tempuh (km): ");
    scanf("%d", &jarak);

    printf("Masukkan waktu tempuh (menit): ");
    scanf("%d", &waktu);

    kecepatan = (jarak / (double)waktu) * 60.0;

    printf("========================================\n");
    printf("\tKECEPATAN RATA-RATA\n");
    printf("========================================\n");
    printf("Jarak tempuh        : %d km\n", jarak);
    printf("Waktu tempuh        : %d menit\n", waktu);
    printf("----------------------------------------\n");
    printf("Kecepatan           : %.2f km/jam\n", kecepatan);
    printf("========================================\n");

    return 0;
}