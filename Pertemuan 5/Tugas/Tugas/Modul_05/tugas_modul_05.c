/* 
Nama : Fransiskus Reikinata Koesprasetyo 
NIM : 2610511036 Kelas : B 
Modul : 5 
Deskripsi : Program menerima dan mengolah nilai mahasiswa menggunakan struktur perulangan. 
*/

#include <stdio.h>

int main(void)
{
    int jumlah_mahasiswa;
    int i;
    float nilai;
    float total_nilai = 0;
    int jumlah_lulus = 0;
    int jumlah_tidak_lulus = 0;
    float nilai_tertinggi;
    float nilai_terendah;
    float rata_rata;
    float persentase_lulus;

    printf("================================================\n");
    printf("             PROGRAM REKAP NILAI\n");
    printf("================================================\n");

    do
    {
        printf("Masukkan jumlah mahasiswa 1-100: ");
        scanf("%d", &jumlah_mahasiswa);
        printf("\n");

        if (jumlah_mahasiswa < 1 || jumlah_mahasiswa > 100)
        {
            printf("Jumlah mahasiswa tidak valid!\n");
        }
    } while (jumlah_mahasiswa < 1 || jumlah_mahasiswa > 100);

    for (i = 1; i <= jumlah_mahasiswa; i++)
    {
        do
        {
            printf("Nilai mahasiswa ke-%d: ", i);
            scanf("%f", &nilai);

            if (nilai < 0 || nilai > 100)
            {
                printf("Nilai tidak valid!\n");
            }
        } while (nilai < 0 || nilai > 100);

        total_nilai = total_nilai + nilai;

        if (i == 1)
        {
            nilai_tertinggi = nilai;
            nilai_terendah = nilai;
        }
        else
        {
            if (nilai > nilai_tertinggi)
            {
                nilai_tertinggi = nilai;
            }

            if (nilai < nilai_terendah)
            {
                nilai_terendah = nilai;
            }
        }

        if (nilai >= 60)
        {
            jumlah_lulus++;
        }
        else
        {
            jumlah_tidak_lulus++;
        }
    }

    rata_rata = total_nilai / jumlah_mahasiswa;
    persentase_lulus = (jumlah_lulus * 100.0) / jumlah_mahasiswa;

    printf("\nHASIL REKAP\n");
    printf("------------------------------------------------\n");
    printf("Jumlah mahasiswa       : %d\n", jumlah_mahasiswa);
    printf("Total nilai            : %.2f\n", total_nilai);
    printf("Rata-rata              : %.2f\n", rata_rata);
    printf("Nilai tertinggi        : %.2f\n", nilai_tertinggi);
    printf("Nilai terendah         : %.2f\n", nilai_terendah);
    printf("Jumlah lulus           : %d\n", jumlah_lulus);
    printf("Jumlah tidak lulus     : %d\n", jumlah_tidak_lulus);
    printf("Persentase kelulusan   : %.2f%%\n", persentase_lulus);
    printf("================================================\n");

    return 0;
}

/*
START

    input jumlah mahasiswa
    validasi jumlah mahasiswa

    for setiap mahasiswa
        input nilai
        validasi nilai

        hitung total nilai
        tentukan nilai tertinggi
        tentukan nilai terendah

        jika nilai >= 60
            hitung jumlah lulus
        else
            hitung jumlah tidak lulus

    hitung rata-rata
    hitung persentase kelulusan

    output hasil rekap nilai mahasiswa

END

*/