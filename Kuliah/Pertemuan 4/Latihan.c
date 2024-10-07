#include "stdio.h"

void main() {
    //nilai <= 30, predikat E dan bobot 1.00
    //nilai <= 40, predikat D dan bobot 1.50
    //nilai <= 48, predikat C- dan bobot 1.75
    //nilai <= 55, predikat C dan bobot 2.00
    //nilai <= 62, predikat C+ dan bobot 2.50
    //nilai <= 69, predikat B- dan bobot 2.75
    //nilai <= 76, predikat B dan bobot 3.00
    //nilai <= 83, predikat B+ dan bobot 3.25
    //nilai <= 90, predikat A- dan bobot 3.50
    //nilai <= 100, predikat A dan bobot 4.00

    printf("Program Data Diri\n");
    printf("----------------------------\n");
    printf("NIM Mahasiswa\t: 2401082018\n");
    printf("Nama Mahasiswa\t: Farhan Hanif Azhary\n");
    printf("Alamat\t\t: Kerinci\n");
    printf("No HP\t\t: 12343556\n");
    printf("----------------------------\n");

    int nilai;
    printf("Masukkan Nilai\t:");
    scanf("%i", &nilai);

    if (nilai <= 100 && nilai > 90) {
        printf("Predikat: A \nbobot 4.00");
    }else if(nilai <= 90 && nilai > 83) {
        printf("Predikat: A- \nbobot 3.50");
    }else if(nilai <= 83 && nilai > 76) {
        printf("Predikat: B+ \nbobot 3.25");
    }else if(nilai <= 76&& nilai > 69) {
        printf("Predikat: B \nbobot 3.00");
    }else if(nilai <= 69 && nilai > 62) {
        printf("Predikat: B- \nbobot 2.75");
    }else if(nilai <= 62 && nilai > 55) {
        printf("Predikat: C+ \nbobot 2.50");
    }else if(nilai <= 55 && nilai > 48) {
        printf("Predikat: C \nbobot 2.00");
    }else if(nilai <= 48 && nilai > 40) {
        printf("Predikat: C- \nbobot 1.75");
    }else if(nilai <= 40 && nilai > 30) {
        printf("Predikat: D \nbobot 1.50");
    }else if(nilai <= 30) {
        printf("Predikat: E \nbobot 1.00");
    }
}
