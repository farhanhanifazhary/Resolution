#include "stdio.h"

void main () {
    int dolar, rupiah, lembar_100_ribu, lembar_50_ribu, lembar_20_ribu, lembar_10_ribu, lembar_5_ribu, lembar_2_ribu, lembar_1_ribu, sisa_lembar_100_ribu, sisa_lembar_50_ribu, sisa_lembar_20_ribu, sisa_lembar_10_ribu, sisa_lembar_5_ribu, sisa_lembar_2_ribu, sisa_lembar_1_ribu;
    dolar = 30;
    rupiah = dolar * 15000;
    lembar_100_ribu = rupiah / 100000;
    sisa_lembar_100_ribu = rupiah % 100000;
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

    printf("Hasil konversi 30 dolar adalah %i lembar 100 ribu rupiah %i lembar 50 ribu rupiah %i lembar 20 ribu rupiah %i lembar 10 ribu rupiah %i lembar 5 ribu rupiah %i lembar 2 ribu rupiah %i lembar 1 ribu rupiah", lembar_100_ribu, lembar_50_ribu, lembar_20_ribu, lembar_10_ribu, lembar_5_ribu, lembar_2_ribu, lembar_1_ribu);
}
