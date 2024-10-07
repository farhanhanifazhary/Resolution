#include "stdio.h"

void main () {
    int a, b, c, a7, b9, c6, total_belanja, jumlah_bayar, uang_kembalian, lembar_100_ribu, lembar_50_ribu, lembar_20_ribu, lembar_10_ribu, lembar_5_ribu, lembar_2_ribu, lembar_1_ribu, sisa_lembar_100_ribu, sisa_lembar_50_ribu, sisa_lembar_20_ribu, sisa_lembar_10_ribu, sisa_lembar_5_ribu, sisa_lembar_2_ribu, sisa_lembar_1_ribu, sisa_koin_500, koin_500, sisa_koin_100, koin_100;
    a = 9600;
    b = 7800;
    c = 4200;
    a7 = a * 7;
    b9 = b * 9;
    c6 = c * 6;
    jumlah_bayar = 350000;
    total_belanja = a*7 + b*9 + c*6;
    uang_kembalian = jumlah_bayar - total_belanja;
    lembar_100_ribu = total_belanja / 100000;
    sisa_lembar_100_ribu = total_belanja % 100000;
    lembar_50_ribu = sisa_lembar_100_ribu / 50000;
    sisa_lembar_50_ribu = sisa_lembar_100_ribu % 50000;
    lembar_20_ribu = sisa_lembar_50_ribu / 20000;
    sisa_lembar_20_ribu = sisa_lembar_50_ribu % 20000;
    lembar_10_ribu = sisa_lembar_20_ribu / 10000;
    sisa_lembar_10_ribu = sisa_lembar_20_ribu % 10000;
    lembar_5_ribu = sisa_lembar_10_ribu / 5000;
    sisa_lembar_5_ribu = sisa_lembar_10_ribu % 5000;
    lembar_2_ribu = sisa_lembar_5_ribu / 2000;
    sisa_lembar_2_ribu = sisa_lembar_5_ribu % 2000;
    lembar_1_ribu = sisa_lembar_2_ribu / 1000;
    sisa_lembar_1_ribu = sisa_lembar_2_ribu % 1000;
    koin_500 = sisa_lembar_1_ribu / 500;
    sisa_koin_500 = sisa_lembar_1_ribu % 500;
    koin_100 = sisa_koin_500 / 100;
    sisa_koin_100 = sisa_koin_500 % 100;

    printf("total belanja %i \nuang kembalian %i \n%i lembar 100 ribu rupiah \n%i lembar 50 ribu rupiah \n%i lembar 20 ribu rupiah \n%i lembar 10 ribu rupiah \n%i lembar 5 ribu rupiah \n%i lembar 2 ribu rupiah \n%i lembar 1 ribu rupiah \n%i koin 500 rupiah \n%i koin 100 rupiah", total_belanja, uang_kembalian, lembar_100_ribu, lembar_50_ribu, lembar_20_ribu, lembar_10_ribu, lembar_5_ribu, lembar_2_ribu, lembar_1_ribu, koin_500, koin_100);

    printf("\n\nFaktur Belanja Budi");
    printf("\n==============================");
    printf("\nBuku tulis \t7  \t%i", a7);
    printf("\nPulpen     \t9  \t%i", b9);
    printf("\npenggaris  \t6  \t%i", c6);
    printf("\n------------------------------");
    printf("\nTotal          22 \t%i", total_belanja);
    printf("\nBayar      \t \t%i", jumlah_bayar);
    printf("\n------------------------------    ");
    printf("\nKembalian  \t \t%i", uang_kembalian);

}
