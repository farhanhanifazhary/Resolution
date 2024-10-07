#include "stdio.h"

int main() {
    char sigma[20];
    char bintang[20];
    char level5[20];

    printf("Enter sigma : ");
    scanf("%s", &sigma);
    printf("Enter bintang : ");
    fflush(stdin);
    scanf("%s", &bintang);
    printf("Enter level : ");
    fflush(stdin);
    scanf("%s", &level5);

    printf("Apa yang dicari oleh orang-orang sigma?");
    printf(" %s.", sigma);
    printf(" Bintang skibidi yang level 4.");
    printf(" Kalo yang %s cuman %s.", bintang, level5);
    return 0;
}
