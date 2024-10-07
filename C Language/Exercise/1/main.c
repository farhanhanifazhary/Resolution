#include <stdio.h>

#define JUDUL "PintarNgoding.com"
#define BILANGAN 100

void main () {
    int angka = 10;
    char huruf = 'A';
    float pecahan = 4.5;
    printf("Ohayou sekai!");

    printf("Konstanta JUDUL adalah %s\n", JUDUL);
    printf("Konstanta BILANGAN adalah %i\n", BILANGAN);

    puts("Ini adalah fungsi puts()");
    putchar('*');
    puts("");

    printf("variabel angka = %d\n", angka);
    printf("variabel huruf = %c\n", huruf);
    printf("varibel pecahan = %.1f\n", pecahan);
}
