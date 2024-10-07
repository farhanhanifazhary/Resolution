#include "stdio.h"

void main() {
    int bahasaJepang;
    char ssw[2] = {bisa, tidak bisa}, wawancara[2] = {lancar, tidak lancar};

    printf("Inputkan level bahasa Jepang: ");
    scanf("%i", &bahasaJepang);
    printf("Inputkan ssw: ");
    fflush(stdin);
    scanf("%s", &ssw);
    printf("Inputkan wawancara: ");
    fflush(stdin);
    scanf("%s", &wawancara);

    if(bahasaJepang <= 4 && bahasaJepang >= 3) {
        if(ssw == "bisa") {
            if(wawancara == "lancar") {
                printf("Lulus");
            }else {
                printf("tidak lulus");
            }
        }else {
            printf("tidak lulus");
        }
    }else if(bahasaJepang < 2) {
        printf("Lulus");
    }else {
        printf("tidak lulus");
    }
}
