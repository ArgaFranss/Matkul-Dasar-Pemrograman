// Online C compiler to run C program online
#include <stdio.h>

int main()
{
    int jumlah_barang;
    char kode_barang;
    double harga_satuan;
    double total;

    printf("Masukkan kode barang: ");
    scanf(" %c", &kode_barang);

    printf("Masukkan harga satuan: ");
    scanf("%lf", &harga_satuan);

    printf("Masukkan jumlah barang: ");
    scanf("%d", &jumlah_barang);

    total = harga_satuan * jumlah_barang;

    printf("\nRINCIAN TRANSAKSI\n");
    printf("Kode barang  : %c\n", kode_barang);
    printf("Harga satuan : Rp%.2f\n", harga_satuan);
    printf("Jumlah       : %d\n", jumlah_barang);
    printf("Total        : Rp%.2f\n", total);

    return 0;
}