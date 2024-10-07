#include "stdio.h"

void main(){
    printf("MENU MAKANAN\n");
    printf("======================\n");
    printf("1. NASI GORENG\t @20000\n");
    printf("2. MIE GORENG\t @17500\n");
    printf("3. SEBLAK\t @35000\n");
    printf("4. SATE\t\t @25000\n\n");

    int makanan, jumlah, harga, totalharga;
    float pajak, hpajak, bayar;
    printf("Masukkan pilihan makanan anda = ");
    scanf("%i", &makanan);
    printf("Masukkan jumlah = ");
    scanf("%i", &jumlah);

    switch (makanan){
    case 1:
            printf("NASI GORENG \n");
            harga = 20000;
            totalharga = jumlah * harga;
            break;
    case 2:
            printf("MIE GORENG");
            harga = 17500;
            totalharga = jumlah * harga;
            break;
    case 3:
            printf("SEBLAK");
            harga = 35000;
            totalharga = jumlah * harga;
            break;
    case 4:
            printf("SATE");
            harga = 25000;
            totalharga = jumlah * harga;
            break;
    default:
            printf("pilihan anda salah");
            break;
    }
    pajak = 0.13;
    hpajak = totalharga * pajak;
    bayar = totalharga + hpajak;
    printf ("makanan yang anda bayar adalah Rp.%i \n", totalharga);
    printf ("pajak Rp.%.0f \n", hpajak);
    printf ("total yang harus anda bayar adalah Rp.%.0f \n", bayar);
}
