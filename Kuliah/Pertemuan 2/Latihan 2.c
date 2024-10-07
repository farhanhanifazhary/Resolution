#include "stdio.h"

void main() {
    int jam_telp, menit_telp, detik_telp, setelah_jam_telp, setelah_menit_telp, setelah_detik_telp, lama, lama_jam_telp, lama_menit_telp, sisa_lama_jam_telp, sisa_lama_menit_telp;
    jam_telp = 8;
    menit_telp = jam_telp*60 + 12;
    detik_telp = menit_telp*60 + 1;
    setelah_jam_telp = 9;
    setelah_menit_telp = setelah_jam_telp*60 + 10;
    setelah_detik_telp = setelah_menit_telp*60 + 42;
    lama = setelah_detik_telp - detik_telp;
    lama_jam_telp = lama / 3600;
    sisa_lama_jam_telp = lama % 3600;
    lama_menit_telp = sisa_lama_jam_telp / 60;
    sisa_lama_menit_telp = sisa_lama_jam_telp % 60;


    printf("Lama Andi berbicara adalah %i jam %i menit %i detik", lama_jam_telp, lama_menit_telp, sisa_lama_menit_telp);
}
