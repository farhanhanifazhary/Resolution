#include "stdio.h"

void main() {
    int gol, kerja, anak,istri;
    long int gatot, pokok, harian, tnj_anak, tnj_istri;
    float pajak, gaji_bersih;

    printf("-------------Program Gaji Karyawan-------------\n");
    printf("Nama Karyawan\t\t: Sigit Rendang\n");
    printf("Posisi\t\t\t: Full Stack Programmer\n");
    printf("Alamat\t\t\t: Nganjuk City\n");
    printf("Golongan\t\t: ");
    scanf("%i", &gol);
    printf("Hari Kerja\t\t: ");
    scanf("%i", &kerja);
    printf("Anak\t\t\t: ");
    scanf("%i", &anak);
    printf("Istri\t\t\t: ");
    scanf("%i", &istri);
    printf("-----------------------------------------------\n");
    if (gol == 1) {
        pokok = 300000;
        if (kerja > 20) {
            harian = 20 * 10000 + (kerja - 20) * 50000;
        }else {
            harian = kerja * 10000;
        }

    }else if(gol == 2) {
        pokok = 400000;
        if (kerja > 20) {
            harian = 20 * 20000 + (kerja - 20) * 50000;
        }else {
            harian = kerja * 20000;
        }
    }else if(gol == 3) {
        pokok = 500000;
        if (kerja > 20) {
            harian = 20 * 30000 + (kerja - 20) * 50000;
        }else {
            harian = kerja * 30000;
        }
    }else if(gol == 4) {
        pokok = 600000;
        if (kerja > 20) {
            harian = 20 * 40000 + (kerja - 20) * 50000;
        }else {
            harian = kerja * 40000;
        }
    }
    if (anak <= 3) {
                tnj_anak = anak * 100000;
            }else {
                tnj_anak = 3 * 100000;
            }
    if (istri <= 1) {
                tnj_istri = istri * 250000;
            }else {
                tnj_istri = 1 * 250000;
            }
    printf("Gaji Pokok \t\t= Rp %li", pokok);
    printf("\nGaji harian \t\t= Rp %li", harian);
    printf("\nTunjangan Anak \t\t= Rp %li", tnj_anak);
    printf("\nTunjangan Istri \t= Rp %li", tnj_istri);
    gatot = pokok + harian + tnj_anak + tnj_istri;
    printf("\n-----------------------------------------------");
    printf("\nTotal Gaji \t\t= Rp %li", gatot);
    pajak = gatot * 0.1;
    printf("\nPajak \t\t\t= Rp %.2f", pajak);
    gaji_bersih = gatot - pajak;
    printf("\nGaji bersih \t\t= Rp %.2f\n", gaji_bersih);

    /***
    double float = float yg lebih dari ratusan ribu

    TUgas : DI sebuah perusahaan travel ingin menghitung jumlah bayar untuk pesanan travel dari penumpang
    tujuan : bukit tinggi, solok, payakumbuh
    ekonomi : 25000, 35000, 45000
    bisnis : 30000, 40000, 50000
    executive : 60000, 70000, 80000
    **/
}
