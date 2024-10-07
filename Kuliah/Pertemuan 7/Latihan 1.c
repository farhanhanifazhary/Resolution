#include "stdio.h"

void main() {
    /***
    double float = float yg lebih dari ratusan ribu

    TUgas : DI sebuah perusahaan travel ingin menghitung jumlah bayar untuk pesanan travel dari penumpang
    tujuan : bukit tinggi, solok, payakumbuh
    ekonomi : 25000, 35000, 45000
    bisnis : 30000, 40000, 50000
    executive : 60000, 70000, 80000

    get(variabel) = karakter
    gets(variabel) = string
    **/
    int beli, seat;
    long int harga;
    float diskon, pajak, setelah_diskon, total;
    char alamat[20], nama_penumpang[20], nama_sopir[20], tujuan[20], kelas[20];

    printf("-------------Program Travel Stasiun Lempuyangan-------------\n");
    printf("Nama Penumpang\t\t: ");
    fflush(stdin);
    scanf("%s", &nama_penumpang);
    printf("Nama Sopir\t\t: ");
    fflush(stdin);
    scanf("%s", &nama_sopir);
    printf("Tempat Duduk\t\t: ");
    fflush(stdin);
    scanf("%i", &seat);
    printf("Alamat\t\t\t: ");
    fflush(stdin);
    scanf("%s", &alamat);
    printf("Tujuan\t\t\t: ");
    fflush(stdin);
    scanf("%s", &tujuan);
    printf("Kelas\t\t\t: ");
    fflush(stdin);
    scanf("%s", &kelas);
    printf("tiket\t\t\t: ");
    scanf("%i", &beli);
    printf("-----------------------------------------------\n");
    if (tujuan == "Bukit Tinggi") {
        if (kelas == "Ekonomi") {
            harga = 25000 * beli;
        }else if (kelas == "Bisnis") {
            harga = 30000 * beli;
        }else if (kelas == "Executive") {
            harga = 60000 * beli;
        }

    }else if (tujuan == "Solok") {
        if (kelas == "Ekonomi") {
            harga = 35000 * beli;
        }else if (kelas == "Bisnis") {
            harga = 40000 * beli;
        }else if (kelas == "Executive") {
            harga = 70000 * beli;
        }
    }else if (tujuan == "Payakumbuh") {
        if (kelas == "Ekonomi") {
            harga = 45000 * beli;
        }else if (kelas == "Bisnis") {
            harga = 50000 * beli;
        }else if (kelas == "Executive") {
            harga = 80000 * beli;
        }
    }

    if (beli > 5 && kelas == "Bisnis" && tujuan == "Bukit Tinggi") {
        diskon = harga * 0.12;
    }else if (beli > 5 && kelas == "Executive" && tujuan == "Solok") {
        diskon = harga * 0.1;
    }
    setelah_diskon = harga - diskon;
    pajak = setelah_diskon * 0.15;
    total = setelah_diskon + pajak;
    printf("Harga Tiket\t\t: %li", harga);
    printf("\ndiskon\t\t\t: %.2f", diskon);
    printf("\nPajak\t\t\t: %.2f", pajak);
    printf("\nTotal Biaya\t\t: %.2f", total);

}
