#include "stdio.h"

void main() {
    int bulanke;

    printf("inputkan bulan ke berapa: ");
    scanf("%d", &bulanke);

    switch(bulanke) {
    case 1:
        printf("\nJanuari");
        break;
    case 2:
        printf("\nFebruari");
        break;
    default:
        printf("Angka yang anda inputkan salah");
    }
}
