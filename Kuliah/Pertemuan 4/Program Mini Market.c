/*****
    Tanggal     : 07 Sepetember 2024
    Nama        : Farhan Hanif Azhary
    Deskripsi   : Program Minimarket
    *****/

#include "stdio.h"

void main() {

    printf("Minimarket Mas Amba Tukam\n");
    printf("-----------------------------\n");
    printf("Pensil\t\t: Rp 3200\n");
    printf("Pena\t\t: Rp 6300\n");
    printf("Buku Tulis\t: Rp 7800\n");
    printf("Buku Gambar\t: Rp 12500\n");
    printf("-----------------------------\n");

    int a, b, c, d, belanja, jml_pensil, jml_pena, jml_bukuTulis, jml_bukuGambar;
    float pajak, total_belanja;
    //jumlah pensil         = 3
    //jumlah pena           = 5
    //jumlah buku tulis     = 2
    //jumlah buku gambar    = 1

    printf("Masukkan Jumlah pembelian Pensil\t:");
    scanf("%i", &jml_pensil);
    a = 3200;
    printf("Masukkan Jumlah pembelian Pena\t\t:");
    scanf("%i", &jml_pena);
    b = 6300;
    printf("Masukkan Jumlah pembelian Buku Tulis\t:");
    scanf("%i", &jml_bukuTulis);
    c = 7800;
    printf("Masukkan Jumlah pembelian Buku Gambar\t:");
    scanf("%i", &jml_bukuGambar);
    d = 12500;

    belanja = (a*jml_pensil) + (b*jml_pena) + (c*jml_bukuTulis) + (d*jml_bukuGambar);
    //Jika harga belanja lebih besar dari Rp 50000
    //Maka pajak = 15%
    //Jika harga belanja >= 100000
    //Maka pajak = 18%
    //pajak = 0.27 * belanja;
    //total_belanja = belanja + pajak;
    if (belanja > 50000 && belanja < 100000) {
        pajak = 0.15 * belanja;
        total_belanja = belanja + pajak;
    }else if(belanja >= 100000) {
        pajak = 0.18 * belanja;
        total_belanja = belanja + pajak;
    }

    printf("-----------------------------\n");
    printf("Harga Belanja\t: Rp %i\n", belanja);
    printf("Pajak\t\t: Rp %.2f\n", pajak);
    printf("Total Belanja\t: Rp %.2f\n", total_belanja);
    printf("-----------------------------\n");
}
