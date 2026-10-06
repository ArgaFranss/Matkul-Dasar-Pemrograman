/*
Nama : Fransiskus Reikinata Koesprasetyo
NIM : 2610511036
Kelas : B
Modul : 4
Deskripsi : Program menghitung tarif parkir berdasarkan
            jenis kendaraan, durasi, dan status member.
*/

#include <stdio.h>

int main(void)
{
    int jenisKendaraan;
    int durasiParkir;
    int statusMember;

    int tarifJamPertama;
    int tarifJamBerikutnya;
    int tarifMaksimal;

    double tarifAwal;
    double diskon = 0;
    double totalBayar;

    const double DISKON = 0.10;

    printf("================================================\n");
    printf("             PROGRAM TARIF PARKIR\n");
    printf("================================================\n");

    printf("Jenis kendaraan:\n");
    printf("1. Sepeda motor\n");
    printf("2. Mobil\n");
    printf("3. Bus\n");
    printf("Masukkan pilihan : ");
    scanf("%d", &jenisKendaraan);

    printf("Masukkan durasi parkir : ");
    scanf("%d", &durasiParkir);

    printf("Status member:\n");
    printf("0. Bukan member\n");
    printf("1. Member\n");
    printf("Masukkan status : ");
    scanf("%d", &statusMember);

    if (jenisKendaraan < 1 || jenisKendaraan > 3)
    {
        printf("Jenis kendaraan tidak valid.\n");
        return 0;
    }
    else if (durasiParkir < 1)
    {
        printf("Durasi tidak valid.\n");
        return 0;
    }
    else if (statusMember != 0 && statusMember != 1)
    {
        printf("Status member tidak valid.\n");
        return 0;
    }

    switch (jenisKendaraan)
    {
    case 1:
        tarifJamPertama = 3000;
        tarifJamBerikutnya = 1500;
        tarifMaksimal = 15000;
        break;

    case 2:
        tarifJamPertama = 5000;
        tarifJamBerikutnya = 3000;
        tarifMaksimal = 30000;
        break;

    case 3:
        tarifJamPertama = 10000;
        tarifJamBerikutnya = 5000;
        tarifMaksimal = 60000;
        break;

    default:
        printf("Jenis kendaraan tidak valid.\n");
        return 0;
    }

    if (durasiParkir == 1)
    {
        tarifAwal = tarifJamPertama;
    }
    else
    {
        tarifAwal = tarifJamPertama + (durasiParkir - 1) * tarifJamBerikutnya;
    }

    if (tarifAwal > tarifMaksimal)
    {
        tarifAwal = tarifMaksimal;
    }

    if (statusMember == 1)
    {
        if (durasiParkir >= 2)
        {
            diskon = tarifAwal * DISKON;
        }
    }

    totalBayar = tarifAwal - diskon;

    printf("\nRINCIAN PARKIR\n");
    printf("------------------------------------------------\n");

    if (jenisKendaraan == 1)
    {
        printf("Jenis kendaraan : Sepeda motor\n");
    }
    else if (jenisKendaraan == 2)
    {
        printf("Jenis kendaraan : Mobil\n");
    }
    else
    {
        printf("Jenis kendaraan : Bus\n");
    }

    printf("Durasi          : %d jam\n", durasiParkir);
    printf("Tarif awal      : Rp%.2f\n", tarifAwal);
    printf("Diskon member   : Rp%.2f\n", diskon);
    printf("Total bayar     : Rp%.2f\n", totalBayar);

    printf("================================================\n");

    return 0;
}

// //Pseudocode

// START

// INPUT jenis kendaraan
// INPUT durasi parkir
// INPUT status member

// IF jenis kendaraan tidak valid THEN
//     OUTPUT "Jenis kendaraan tidak valid"
// ELSE IF durasi parkir < 1 THEN
//     OUTPUT "Durasi tidak valid"
// ELSE IF status member tidak valid THEN
//     OUTPUT "Status member tidak valid"
// ELSE
//     SWITCH jenis kendaraan
//         CASE 1: tentukan tarif sepeda motor
//         CASE 2: tentukan tarif mobil
//         CASE 3: tentukan tarif bus
//     END SWITCH

//     IF durasi parkir = 1 THEN
//         total bayar = tarif jam pertama
//     ELSE
//         total bayar = tarif jam pertama + tarif jam berikutnya * (durasi parkir - 1)
//     END IF

//     IF total bayar > tarif maksimal THEN
//         total bayar = tarif maksimal
//     END IF

//     IF status member = 1 AND durasi parkir >= 2 THEN
//         diskon = total bayar * 10%
//     END IF

//     total bayar = total bayar - diskon
//     OUTPUT total bayar
// END