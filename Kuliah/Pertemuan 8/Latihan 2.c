#include "stdio.h"

void main() {
    char nilai;

    printf("Masukkan nilai = ");
    scanf("%c", &nilai);

    switch(nilai) {
        case 'A':
            printf("predikat = Sangat Memuaskan");
            break;
        case 'B':
            printf("predikat = Memuaskan");
            break;
        case 'C':
            printf("predikat = Cukup");
            break;
        case 'D':
            printf("predikat = Kurang");
            break;
        case 'E':
            printf("predikat = Sangat Kurang");
            break;
        default:
            printf("predikat = Tidak Lulus");
            break;
    }
}
