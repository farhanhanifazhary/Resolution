#include <stdio.h>

/*void main() {
    int a = 10;
    int b = 5;

    int hasilRelasi = a != b;
    printf("%d", hasilRelasi);


    a++;
    printf("%d", a);
}*/

/*void main () {
    int a = 1; //true
    int b = 0; //false

    printf("a = %d", a);
    printf("\nb = %d", b);

    printf("\n\na && b = %d", a && b); //andk
    printf("\na || b = %d", a || b); //or
    printf("\n!a = %d", !a); //not
    printf("\na ^ b = %d", a ^ b); //xor
}*/


/*void main() {
    int a = 20;
    int b = 15;

    printf("a & b = %d\n", a & b); //10100 & 01111 => 00100
    printf("a | b = %d\n", a | b); //11111
    printf("~a = %d\n", ~a); //01011f
    printf("a ^ b = %d\n", a ^ b); //11011
}*/

/*void main() {
    int a = 5;
    a *= 10;
    printf("%d", a);
}*/

/*void main() {
    int bulanke = 2;

    printf("%s", bulanke==1?"januari":bulanke==2?"februari":"bulan yang lain");
}*/

/*void main() {
    int nilaiAngka = 70;

    char nilaiHuruf = nilaiAngka >= 80 && nilaiAngka <= 100? 'A':'X';
    printf("Nilai Angka %d = %c", nilaiAngka, nilaiHuruf);
}*/

void main() {
    int ssw;
    scanf("%s", &ssw);
    printf("%s", ssw=="bisa"?"Lulus":ssw=="tidakbisa"?"Tidak lulus":"Lebih giat belajar");

}
