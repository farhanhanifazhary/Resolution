#include "stdio.h"

void main() {
    int air, admin, biaya, total, bayar;
    float kembalian;

    printf("Program Perhitungan Pemakaian Air\n");
    printf("----------------------------------------\n");
    printf("Nama Pelanggan\t: Zaky Indomie\n");
    printf("Alamat\t\t: Nganjuk City\n");
    printf("Air\t\t: ");
    scanf("%i", &air);
    printf("----------------------------------------\n");
    if (air > 5 && air <= 12) {
        biaya = 1200;
    }else if(air > 12 && air <= 20) {
        biaya = 2000;
    }else if(air > 20){
        biaya = 3500;
    }
    printf("Biaya = Rp %i", biaya);
    admin = 5000;
    printf("\nAdministrasi = Rp %i", admin);
    total = admin + biaya;
    printf("\nTotal Biaya = Rp %i", total);
    printf("\nBayar = Rp ");
    scanf("%i", &bayar);
    kembalian = bayar - total;
    printf("Kembalian\t = Rp %.2f\n", kembalian);
}
