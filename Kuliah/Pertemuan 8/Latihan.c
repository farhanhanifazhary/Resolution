#include "stdio.h"

void main() {
    int bangun_datar, bangun_ruang, sisi, panjang, lebar, jari2, tinggi, alas, a, b, s_alas, d, e, rusuk, t_rusuk;
    float pi, luas, keliling, t_alas, volume, luas_permukaan, c, luas_alas;

    printf("Masukkan bangun datar: ");
    scanf("%d", &bangun_datar);
    printf("Masukkan bangun ruang: ");
    scanf("%d", &bangun_ruang);



    switch(bangun_datar) {
    case 1:
        printf("Persegi");
        printf("\nSisi = ");
        scanf("%d", &sisi);
        keliling = sisi * 4;
        luas = sisi * sisi;
        printf("Keliling = %.2f", keliling);
        printf("\nLuas = %.2f", luas);
        printf("\n**********");
        printf("\n*        *");
        printf("\n*        *");
        printf("\n*        *");
        printf("\n*        *");
        printf("\n**********");
        break;

    case 2:
        printf("Persegi Panjang");
        printf("\npanjang = ");
        scanf("%d", &panjang);
        printf("Lebar = ");
        scanf("%d", &lebar);
        keliling = (panjang + lebar) * 2;
        luas = panjang * lebar;
        printf("Keliling = %.2f", keliling);
        printf("\nLuas = %.2f", luas);
        printf("\n******************");
        printf("\n*                *");
        printf("\n*                *");
        printf("\n*                *");
        printf("\n*                *");
        printf("\n******************");
        break;

    case 3:
        printf("Segitiga");
        printf("\nAlas = ");
        scanf("%d", &alas);
        a = b = alas;
        printf("Tinggi = ");
        scanf("%d", &tinggi);
        keliling = a + b + alas;
        luas = (alas * tinggi) / 2;
        printf("Keliling = %.2f", keliling);
        printf("\nLuas = %.2f", luas);
        printf("\n    *");
        printf("\n   * *");
        printf("\n  *   *");
        printf("\n *     *");
        printf("\n*********");
        break;

    case 4:
        printf("Lingkaran");
        printf("\nJari-jari = ");
        scanf("%d", &jari2);
        pi = 3.14;
        printf("pi = %.2f", pi);
        keliling = 2 * pi * jari2;
        luas = pi * (jari2 * jari2);
        printf("Keliling = %.2f", keliling);
        printf("\nLuas = %.2f", luas);
        break;

    default:
        printf("SALAAAAHHH");
        break;
    }

    switch(bangun_ruang) {
    case 1:
        printf("\n\nKubus");
        printf("\nSisi = ");
        scanf("%d", &sisi);
        luas_permukaan = sisi * sisi * 12;
        volume = sisi * sisi * sisi;
        printf("Luas Permukaan = %.2f", luas_permukaan);
        printf("\nVolume = %.2f", volume);
        break;

    case 2:
        printf("\n\nBalok");
        printf("\npanjang = ");
        scanf("%d", &panjang);
        printf("Lebar = ");
        scanf("%d", &lebar);
        printf("Tinggi = ");
        scanf("%d", &tinggi);
        luas_permukaan = ((lebar * tinggi) * 2) + ((lebar * panjang) * 2) + ((panjang * tinggi) * 2);
        volume = panjang * lebar * tinggi;
        printf("Luas Permukaan = %.2f", luas_permukaan);
        printf("\nVolume = %.2f", volume);
        break;

    case 3:
        printf("\n\nLimas Persegi");
        printf("\nSisi = ");
        scanf("%d", &sisi);
        printf("Tinggi = ");
        scanf("%d", &tinggi);
        printf("Rusuk = ");
        scanf("%d", &rusuk);
        printf("Tinggi Rusuk = ");
        scanf("%d", &t_rusuk);
        Luas Permukaan = (sisi * sisi) + (3 * (sisi * t_rusuk / 2));
        volume = ((sisi * sisi) * tinggi) / 3 ;
        printf("Luas Permukaan = %.2f", luas_permukaan);
        printf("\nVolume = %.2f", volume);
        break;

    case 4:
        printf("\n\nBola");
        printf("\nJari-jari = ");
        scanf("%d", &jari2);
        pi = 3.14;
        printf("pi = %.2f", pi);
        luas_permukaan = 4 * pi * (jari2 * jari2);
        volume = (4 * pi * (jari2 * jari2 * jari2)) / 3;
        printf("Luas Permukaan = %.2f", luas_permukaan);
        printf("\nVolume = %.2f", volume);
        break;

    default:
        printf("SALAAAAHHH");
        break;
    }
}
