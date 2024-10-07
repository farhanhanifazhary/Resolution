#include "stdio.h"

void main() {
    int a, b, c, d, total, j_ng, j_mg, j_s, j_st, beli, aa, bb, cc, dd, uang;
    float pajak, s_p, diskon, s_d, kembalian;
    char member;

    printf("-------------Menu Makananan-------------\n");
    a = 7500;
    printf("\nPensil : Rp %d", a);
    b = 10000;
    printf("\nPena: Rp %d", b);
    c = 15500;
    printf("\nBuku Tulis: Rp %d", c);
    d = 20000;
    printf("\nBuku Gambar: Rp %d", d);
    printf("\nMau beli apa?: ");
    scanf("%d", &beli);

    switch(beli) {
    case 1:
        printf("Jumlah beli Pensil: ");
        scanf("%d", &aa);
        total = aa * a;
        printf("Total = %d", total);
        break;
    case 2:
        printf("Jumlah beli pena: ");
        scanf("%d", &bb);
        total = bb * b;
        printf("Total = %d", total);
        break;
    case 3:
        printf("Jumlah beli buku tulis: ");
        scanf("%d", &cc);
        total = cc * c;
        printf("Total = %d", total);
        break;
    case 4:
        printf("Jumlah beli buku gambar: ");
        scanf("%d", &dd);
        total = dd * d;
        printf("Total = %d", total);
        break;
    default:
        printf("Input salah");
    }
    printf("Member: ");
    fflush(stdin);
    scanf("%c", &member);
    if(member == 'S') {
        diskon = total * 0.02;
        s_d  = total - diskon;
        printf("diskon = %.2f", diskon);
        printf("Harga setelah diskon = %.2f", s_d);
    }else if(member == 'P') {
        diskon = total * 0.05;
        s_d  = total - diskon;
        printf("diskon = %.2f", diskon);
        printf("Harga setelah diskon = %.2f", s_d);
    }else if(member == 'G') {
        diskon = total * 0.07;
        s_d  = total - diskon;
        printf("diskon = %.2f", diskon);
        printf("Harga setelah diskon = %.2f", s_d);
    }
    pajak = s_d * 0.08;
    printf("Pajak = %.2f", pajak);
    s_p = s_d + pajak;
    printf("Total setelah pajak = %.2f", s_p);
    printf("Uang = ");
    scanf("%d", &uang);

    if(uang > s_p) {
        kembalian = uang - s_p;
        printf("Kembalian = %.2f", kembalian);
    }else {
        printf("Maaf uang yang diinputkan kurang");
    }
















}
