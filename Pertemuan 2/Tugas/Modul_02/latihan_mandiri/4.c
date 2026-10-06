#include <stdio.h>

int main() {
    int input;
    int jam;
    int menit;
    int detik;
    int sisa;

    printf("Masukkan total detik: ");
    scanf("%d", &input);

    jam     = input / 3600;
    sisa    = input % 3600;
    menit   = sisa / 60;
    detik   = sisa % 60;

    printf("\n%d detik setara dengan:\n"
    "%d jam\n"
    "%d menit\n"
    "%d detik\n",
    input, jam, menit, detik);
    
    return 0;
}