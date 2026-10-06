#include <stdio.h>

int main(void)
{
    int kodeMember;
    int hargaAwal;
    int persentaseDiskon;

    double hargaAkhir;

    printf("========================================\n");
    printf("        STATUS DISKON MEMBER\n");
    printf("========================================\n");

    printf("Masukkan kode member (1-3): ");
    scanf("%d", &kodeMember);
    
    printf("Masukkan harga awal: ");
    scanf("%d", &hargaAwal);

    switch (kodeMember)
    {
    case 1:
        persentaseDiskon = 5;
        break;

    case 2:
        persentaseDiskon = 10;
        break;

    case 3:
        persentaseDiskon = 15;
        break;

    default:
        persentaseDiskon = 0;
        break;
    }

    hargaAkhir = hargaAwal - (hargaAwal * persentaseDiskon / 100.0);

    printf("Kode member     : %d\n", kodeMember);
    printf("Harga awal      : Rp%.2f\n", (double)hargaAwal);
    printf("Diskon          : %d%%\n", persentaseDiskon);
    printf("Harga akhir     : Rp%.2f\n", hargaAkhir);
    printf("========================================\n");

    return 0;
}