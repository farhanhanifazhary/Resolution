#include "stdio.h"

void main() {
    int bil, hasil;

    printf("Program Bilangan Kelipatan\n");
    printf("Bilangan \t= ");
    scanf("%i", &bil);
    if(bil % 5 == 0 && bil % 2 != 0) {
        hasil = bil * 10;
    }else {
        hasil = bil * 5;
    }
    printf("Hasil \t\t= %i", hasil);
}
