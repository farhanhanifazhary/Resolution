#include "stdio.h"
#include <string.h>

void main() {
    long int i, j, f, d;
    char b;

    printf("Masukkan batas : ");
    scanf("%li", &j);

    f = 2;
    for(i = 1; i <= j; i++) {
        printf("2^%li \t= \t", i);
        f *= 2;
        printf("%li\n", f);
    }

    printf("\n");
/*
    for(i = 10; i >= j; i--) {
        if(i % 2 == 0) {
            printf("ganjil\t : %d\n", i);
        }else if(i % 2 != 0) {
            printf("genap\t : %d\n", i);
        }
    }

    printf("Masukkan batas : ");
    fflush(stdin);
    scanf("%c", &b);

    for(char i = 'A'; i <= b ; i+=1) {
        printf("%c ", i);
    }*/
}
