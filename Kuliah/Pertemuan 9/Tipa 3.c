#include "stdio.h"

void main(){
    printf("MENU ALAT TULIS\n");
    printf("======================\n");
    printf("1. PENSIL\t @7500\n");
    printf("2. PENA\t\t @10000\n");
    printf("3. BUKU TULIS\t @15500\n");
    printf("4. BUKU GAMBAR\t @20000\n\n");

    int alattulis, jumlah, harga, totalharga, member, tdiskon;
    float diskon, pajak, hpajak, bayar, hdiskon;
    printf("Masukkan pilihan alat tulis anda = ");
    scanf("%i", &alattulis);
    printf("Masukkan jumlah = ");
    scanf("%i", &jumlah);
    printf("Masukkan member = ");
    scanf("%i", &member);
    switch (alattulis){
    case 1:
            printf("PENSIL\n");
            harga = 7500;
            totalharga = jumlah * harga;
            break;
    case 2:
            printf("PENA\n");
            harga = 10000;
            totalharga = jumlah * harga;
            break;
    case 3:
            printf("BUKU TULIS\n");
            harga = 15500;
            totalharga = jumlah * harga;
            break;
    case 4:
            printf("BUKU GAMBAR\n");
            harga = 20000;
            totalharga = jumlah * harga;
            break;
    default:
            printf("pilihan anda salah");
            break;
    break;
    }
    switch (member){
    case 1:
            printf("SILVER\n");
            diskon = 0.02;
            hdiskon = totalharga * diskon;
            break;
    case 2:
            printf("PLATINUM\n");
            diskon = 0.05;
            hdiskon = totalharga * diskon;
            break;
    case 3:
            printf("GOLD\n");
            diskon = 0.07;
            hdiskon = totalharga * diskon;
            break;
    default:
            printf("pilihan anda salah");
            break;
    }
    tdiskon = totalharga - hdiskon;
    pajak = 0.08;
    hpajak = tdiskon * pajak;
    bayar = tdiskon + hpajak;
    printf ("alat tulis yang anda bayar adalah Rp.%i \n", totalharga);
    printf ("diskon Rp.%.0f \n", hdiskon);
    printf ("pajak Rp.%.0f \n", hpajak);
    printf ("total yang harus anda bayar adalah Rp.%.0f \n", bayar);
}
