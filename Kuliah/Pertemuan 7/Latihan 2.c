#include "stdio.h"

void main() {
    int nilai_tugas1, nilai_tugas2, nilai_tugas3, kuis, uts, uas, nilai;
    float rata_tugas, rata_ujian, nilai_akhir;
    char huruf;
    char nama[20], prodi[20], nim[20];

    printf("-------------Program Travel Stasiun -------------\n");
    printf("NIM Mahasiswa \t: ");
    fflush(stdin);
    gets(nim);
    printf("Nama Mahasiswa \t: ");
    fflush(stdin);
    gets(nama);
    printf("Prodi \t\t: ");
    fflush(stdin);
    gets(prodi);
    printf("-------------------------------------");
    printf("\nNilai Tugas \t: ");
    scanf("%i", &nilai_tugas1);
    printf("Nilai kuis \t: ");
    scanf("%i", &kuis);
    printf("Nilai uts \t: ");
    scanf("%i", &uts);
    printf("Nilai uas \t: ");
    scanf("%i", &uas);
    rata_ujian = (kuis + uts + uas + nilai_tugas1) / 4;
    printf("Rata-rata ujian : %.2f", rata_ujian);

    printf("\n-------------------------------------");
    nilai = nilai_tugas1 * 0.25 + kuis * 0.25 + uts * 0.25 + uas * 0.25;
    printf("\nNilai \t\t: %i", nilai);

    if (nilai <= 100 && nilai >= 81) {
        printf("\nNilai Huruf \t: A");
    }else if(nilai <= 80 && nilai >= 71) {
        printf("\nNilai Huruf \t: B");
    }else if(nilai <= 70 && nilai >= 61) {
        printf("\nNilai Huruf \t: C");
    }else if(nilai <= 60 && nilai >= 51) {
        printf("\nNilai Huruf \t: D");
    }else if(nilai <= 50 && nilai >= 0) {
        printf("\nNilai Huruf \t: E");
    }
}
