#include "stdio.h"

void main() {
    int biaya, jam_telp, menit_telp, detik_telp, setelah_jam_telp, setelah_menit_telp, setelah_detik_telp, lama, lama_jam_telp, lama_menit_telp, sisa_lama_jam_telp, sisa_lama_menit_telp;
    jam_telp = 13;
    menit_telp = jam_telp*60 + 10;
    detik_telp = menit_telp*60 + 5;
    setelah_jam_telp = 14;
    setelah_menit_telp = setelah_jam_telp*60 + 30;
    setelah_detik_telp = setelah_menit_telp*60 + 10;
    lama = setelah_detik_telp - detik_telp;
    lama_jam_telp = lama / 3600;
    sisa_lama_jam_telp = lama % 3600;
    lama_menit_telp = sisa_lama_jam_telp / 60;
    sisa_lama_menit_telp = sisa_lama_jam_telp % 60;
    biaya = (lama / 200) * 5000;


    printf("Lama menelpon adalah %i jam %i menit %i detik biaya %i rupiah", lama_jam_telp, lama_menit_telp, sisa_lama_menit_telp, biaya);
}
