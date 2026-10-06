#include <stdio.h>

int main() {
    int angka1;
    int angka2;
    int jumlah_loop;
    int i;

    printf("Masukkan batas awal : ");
    scanf("%d", &angka1);

    printf("Masukkan batas akhir : ");
    scanf("%d", &angka2);

    do {
        if(angka1 > angka2)
        {
            printf("Batas awal harus lebih kecil dari batas akhir.\n");
            printf("Masukkan batas awal : ");
            scanf("%d", &angka1);

            printf("Masukkan batas akhir : ");
            scanf("%d", &angka2);
        }
    } while(angka1 > angka2);

    jumlah_loop = angka2 - angka1;
    
    printf("\n");
    for(i = 0; i <= jumlah_loop; i++)
        {
            printf("%d ", angka1);
            angka1++;
        }
    
    return 0; 
}