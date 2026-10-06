#include <stdio.h>

int main(void)
{
    int umur;
    int semester;
    float tinggi_badan;

    printf("Masukkan umur: ");
    scanf("%d", &umur);

    printf("Masukkan semester: ");
    scanf("%d", &semester);

    printf("Masukkan tinggi badan dalam cm: ");
    scanf("%f", &tinggi_badan);

    printf("\nDATA MAHASISWA\n");
    printf("Umur            : %d tahun\n", umur);
    printf("Semester        : %d\n", semester);
    printf("Tinggi badan    : %.1f cm\n", tinggi_badan);

    return 0; 
}


/* 
1. Karena umur itu merupakan sebuah angka dan kita nanti 
2. Karena tinggi_badan itu bisa menjadi bilangan desimal jadi kita akan menggunakan float
3. fungsi & itu untuk mencari lokasi dari sebuah variable
4.  
5. maka program akan langsung lompat ke printf dan muncul angka angka
6. maka program akan langsung menampilkan angka random dan tidak bisa menampilkan apa yang kita input contoh: 170.5
7. Ya bisa, tetapi nantinya untuk ram yang dipakai akan jauh lebih besar yaitu 2x lipat


*/

