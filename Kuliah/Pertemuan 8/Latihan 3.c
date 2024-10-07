#include "stdio.h"

void main() {
    int mie_goreng, nasi_goreng, seblak, sate, total, j_ng, j_mg, j_s, j_st, makanan;
    float pajak, s_p;

    printf("-------------Menu Makananan-------------\n");
    nasi_goreng = 20000;
    printf("\nNasi Goreng: Rp %d", nasi_goreng);
    mie_goreng = 17500;
    printf("\nMie Goreng: Rp %d", mie_goreng);
    seblak = 35000;
    printf("\nSeblak: Rp %d", seblak);
    sate = 25000;
    printf("\nSate: Rp %d", sate);
    printf("\nMau beli apa?: ");
    scanf("%d", &makanan);

    switch(makanan) {
    case 1:
        printf("Jumlah beli nasi goreng: ");
        scanf("%d", &j_ng);
        total = j_ng * nasi_goreng;
        printf("Total = %d", total);
        pajak = total * 0.13;
        printf("Pajak = %.2f", pajak);
        s_p = total + pajak;
        printf("Total bayar = %.2f", s_p);
        break;
    case 2:
        printf("Jumlah beli mie goreng: ");
        scanf("%d", &j_mg);
        total = j_mg * mie_goreng;
        printf("Total = %d", total);
        pajak = total * 0.13;
        printf("Pajak = %.2f", pajak);
        s_p = total + pajak;
        printf("Total bayar = %d", s_p);
        break;
    case 3:
        printf("Jumlah beli seblak: ");
        scanf("%d", &j_s);
        total = j_s * seblak;
        printf("Total = %d", total);
        pajak = total * 0.13;
        printf("Pajak = %.2f", pajak);
        s_p = total + pajak;
        printf("Total bayar = %d", s_p);
        break;
    case 4:
        printf("Jumlah beli sate: ");
        scanf("%d", &j_st);
        total = j_st * sate;
        printf("Total = %d", total);
        pajak = total * 0.13;
        printf("Pajak = %.2f", pajak);
        s_p = total + pajak;
        printf("Total bayar = %d", s_p);
        break;
    default:
        printf("Input salah");
    }



}
