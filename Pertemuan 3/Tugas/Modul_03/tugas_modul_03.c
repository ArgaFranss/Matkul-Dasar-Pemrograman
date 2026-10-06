/*
Nama : Fransiskus Reikinata Koeprasetyo
NIM : 2610511036
Kelas : B
Modul : 3
Deskripsi : Program menghitung ringkasan aktivitas belajar.
*/

#include <stdio.h>

int main()
{
    const int MENIT_PER_JAM = 60;

    int jumlah_sesi;
    int total_menit;
    int halaman_dibaca;
    int latihan_selesai;
    int target_latihan;

    int jam_belajar;
    int sisa_menit;

    double rata_rata_sesi;
    double persentase_latihan;

    printf("Jumlah sesi belajar : ");
    scanf("%d", &jumlah_sesi);

    printf("Total durasi belajar : ");
    scanf("%d", &total_menit);

    printf("Jumlah halaman dibaca : ");
    scanf("%d", &halaman_dibaca);

    printf("Latihan diselesaikan : ");
    scanf("%d", &latihan_selesai);

    printf("Target latihan mingguan : ");
    scanf("%d", &target_latihan);

    jam_belajar = total_menit / MENIT_PER_JAM;
    sisa_menit = total_menit % MENIT_PER_JAM;

    rata_rata_sesi = (double)total_menit / jumlah_sesi;
    persentase_latihan = ((double)latihan_selesai / target_latihan) * 100.0;

    jumlah_sesi++;

    printf("\n");
    printf("================================================\n");
    printf(" \t  RINGKASAN AKTIVITAS BELAJAR\n");
    printf("================================================\n");
    printf("Jumlah sesi             : %d sesi\n", jumlah_sesi - 1);
    printf("Total waktu belajar     : %d jam %d menit\n", jam_belajar, sisa_menit);
    printf("Halaman dibaca          : %d halaman\n", halaman_dibaca);
    printf("Rata-rata per sesi      : %.2f menit\n", rata_rata_sesi);
    printf("Latihan diselesaikan    : %d dari %d\n", latihan_selesai, target_latihan);
    printf("Persentase penyelesaian : %.2f%%\n", persentase_latihan);
    printf("================================================\n");

    return 0;
}