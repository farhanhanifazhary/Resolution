/*  program : BANGUN DATAR DAN BANGUN RUANG
    nama    : Rachel Setiawan
    nim     : 2401082013
    kelas   : TK 1B
*/


#include "stdio.h"

void main() {
    printf("BANGUN DATAR\n");
    printf("======================\n");
    printf("1. PERSEGI\n");
    printf("2. PERSEGI PANJANG\n");
    printf("3. SEGITIGA\n");
    printf("4. LINGKARAN\n\n");
    printf("BANGUN RUANG\n");
    printf("======================\n");
    printf("1. KUBUS\n");
    printf("2. BALOK\n");
    printf("3. LIMAS SEGITIGA\n");
    printf("4. BOLA\n");

    int pilihan, sisi, panjang, lebar, alas, tinggi;
    float jarijari, keliling, volume;
    int sisiA, sisiB, sisiC;

    printf("Pilihan 1. Bangun Datar\n");
    printf("Pilihan 2. Bangun Ruang\n");
    printf("Masukkan pilihan anda = ");
    scanf("%i", &pilihan);

    switch (pilihan) {
    case 1:
        printf("masukkan pilihan bangun datar anda = ");
        scanf("%i", &pilihan);
        switch (pilihan) {
        case 1:
            printf("Bangun Datar Persegi\n");
            printf("masukkan panjang sisi = ");
            scanf("%i", &sisi);
            keliling = 4 * sisi;
            printf("keliling persegi anda adalah = %.0f \n", keliling);
            break;
        case 2:
            printf("Bangun Datar Persegi Panjang\n");
            printf("masukkan panjang  = ");
            scanf("%i", &panjang);
            printf("masukkan lebar = ");
            scanf("%i", &lebar);
            keliling = (2 * panjang) + (2 * lebar);
            printf("keliling persegi panjang anda adalah = %.0f \n", keliling);
            break;
        case 3:
            printf("Bangun Datar Segitiga\n");
            printf("masukkan sisi A = ");
            scanf("%i", &sisiA);
            printf("masukkan sisi B = ");
            scanf("%i", &sisiB);
            printf("masukkan sisi C = ");
            scanf("%i", &sisiC);
            keliling = sisiA + sisiB + sisiC;
            printf("keliling segitiga anda adalah = %.0f \n", keliling);
            break;
        case 4:
            printf("Bangun Datar Lingkaran\n");
            printf("masukkan jari-jari = ");
            scanf("%f", &jarijari);
            keliling = 2 * 3.14 * jarijari;
            printf("keliling lingkaran anda adalah = %.2f \n", keliling);
            break;
        default:
            printf("pilihan anda salah\n");
            break;
        }
        break;
    case 2:
        printf("masukkan pilihan bangun ruang anda = ");
        scanf("%i", &pilihan);
        switch (pilihan) {
        case 1:
            printf("Bangun Ruang Kubus\n");
            printf("masukkan panjang sisi = ");
            scanf("%i", &sisi);
            volume = sisi * sisi * sisi;
            printf("volume kubus anda adalah = %.0f \n", volume);
            break;
        case 2:
            printf("Bangun Ruang Balok\n");
            printf("masukkan panjang  = ");
            scanf("%i", &panjang);
            printf("masukkan lebar = ");
            scanf("%i", &lebar);
            printf("masukkan tinggi = ");
            scanf("%i", &tinggi);
            volume = panjang * lebar * tinggi;
            printf("volume balok anda adalah = %.0f \n", volume);
            break;
        case 3:
            printf("Bangun Ruang Limas Segitiga\n");
            printf("masukkan panjang alas = ");
            scanf("%i", &panjang);
            printf("masukkan lebar alas = ");
            scanf("%i", &lebar);
            printf("masukkan tinggi = ");
            scanf("%i", &tinggi);
            volume = (1.0 / 3) * (panjang * lebar) * tinggi;
            printf("volume limas segitiga anda adalah = %.2f \n", volume);
            break;
        case 4:
            printf("Bangun Ruang Bola\n");
            printf("masukkan jari-jari = ");
            scanf("%f", &jarijari);
            volume = (4.0 / 3) * 3.14 * jarijari * jarijari * jarijari;
            printf("volume bola anda adalah = %.2f \n", volume);
            break;
        default:
            printf("pilihan anda salah\n");
            break;
        }
        break;
    default:
        printf("pilihan anda salah\n");
        break;
    }
}
