#include "stdio.h"

void main () {
    int hari, tahun, bulan, sisa_tahun, sisa_bulan;
    hari = 300000;
    tahun = hari / 365;
    sisa_tahun = hari % 365;
    bulan = hari / 30;
    sisa_bulan = hari % 30;


    printf("hasil hari = %i\n", hari);
    printf("hasil tahun = %i\n", tahun);
    printf("hasil sisa tahun = %i\n", sisa_tahun);
    printf("hasil bulan = %i\n", bulan);
    printf("hasil sisa bulan = %i\n", sisa_bulan);
}

/*void main () {
    int hari, tahun, bulan, sisa_tahun, sisa_bulan;
    hari = 300000;
    tahun = hari / 365;
    sisa_tahun = hari % 365;
    bulan = sisa_tahun / 30;
    sisa_bulan = sisa_tahun % 30;

    printf("hasil konversi 300000 hari adalah %i tahun %i bulan %i hari", tahun, bulan, sisa_bulan);
}*/

