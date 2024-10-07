#include "stdio.h"

void main() {
    int nilai_tugas1, nilai_tugas2, nilai_tugas3, kuis, uts, uas;
    float rata_tugas, rata_ujian, nilai_akhir;




    printf("NIM Mahasiswa \t: 2801082018");
    printf("\nNama Mahasiswa \t: Farhan Hanif Azhary");
    printf("\nNama Matkul \t: Alpro");
    printf("\n-------------------------------------");
    printf("\nNilai Tugas 1 \t: ");
    scanf("%i", &nilai_tugas1);
    printf("\nNilai Tugas 2 \t: ");
    scanf("%i", &nilai_tugas2);
    printf("\nNilai Tugas 3 \t: ");
    scanf("%i", &nilai_tugas3);
    rata_tugas = (nilai_tugas1 + nilai_tugas2 + nilai_tugas3) / 3;
    printf("\nRata-rata tugas : %.2f", rata_tugas);

    printf("\n\nNilai kuis \t: ");
    scanf("%i", &kuis);
    printf("\nNilai uts \t: ");
    scanf("%i", &uts);
    printf("\nNilai uas \t: ");
    scanf("%i", &uas);
    rata_ujian = (kuis + uts + uas) / 3;
    printf("\nRata-rata ujian : %.2f", rata_ujian);

    printf("\n-------------------------------------");
    nilai_akhir = (rata_tugas * 40/100) + (kuis * 30/100) + (rata_ujian * 40/100);
    printf("\nNilai akhir \t: %.2f", nilai_akhir);

}
