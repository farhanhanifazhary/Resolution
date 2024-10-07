#include "stdio.h"

void main () {
    int detik, jam, menit, sisa_jam, sisa_menit;
    detik = 360000;
    jam = detik / 3600;
    sisa_jam = detik % 3600;
    menit = sisa_jam / 60;
    sisa_menit = sisa_jam % 60;

    printf("Hasil konversi 360000 detik adalah %i jam %i menit %i detik", jam, menit, sisa_menit);
}
