#include "stdio.h"

void main() {
    int a, b, tambah, kurang, kali, bagi, mod;

    a = 50;
    b = 30;
    tambah = a + b;
    kurang = a - b;
    kali = a * b;
    bagi = a / b;
    mod = a % b;

    printf("Hasil penjumlah a dan b = %i\n", tambah);
    printf("Hasil pengurangan a dan b = %i\n", kurang);
    printf("Hasil pengkalian a dan b = %i\n", kali);
    printf("Hasil pembagian a dan b = %i\n", bagi);
    printf("Hasil mod a dan b = %i\n", mod);
}
