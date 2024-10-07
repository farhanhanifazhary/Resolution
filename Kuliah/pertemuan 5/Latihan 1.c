#include "stdio.h"

void main() {
    int jarak, biaya, bintang;
    float diskon, tot_biaya;

    printf("Program Perhitungan Biaya Ojek Online\n");
    printf("----------------------------------------\n");
    printf("Nama Driver\t: Zaky Indomie\n");
    printf("Nama Customer\t: Sigit Rendang\n");
    printf("Dari\t\t: Nganjuk City\n");
    printf("Ke\t\t: Planet Bekasi\n");
    printf("----------------------------------------\n");
    printf("Jarak adalah\t= ");
    scanf("%i", &jarak);
    biaya = jarak * 550;
    printf("\nBiaya adalah\t = Rp %i\n", biaya);
    if (jarak > 5 && jarak <= 10) {
        diskon = 0.3 * biaya;
        tot_biaya = biaya - diskon;
    }else if(jarak > 10) {
        diskon = 0.5 * biaya;
        tot_biaya = biaya - diskon;
    }else {
        tot_biaya = biaya;
    }
    printf("Diskon\t = %.2f", diskon);
    printf("\nBiaya adalah\t = Rp %.2f\n", tot_biaya);
    printf("----------------------------------------\n");
    printf("Beri bintang untuk driver: ");
    scanf("%i", &bintang);
    printf("Terima Kasih telah menggunakan jasa kami");

}
