#include <stdio.h>

int main() {
    // 1. Deklarasi variabel untuk menyimpan jumlah masing-masing barang
    int baju = 0, celana = 0, jaket = 0, selimut = 0, rompi = 0;
    int total_barang = 0;

    // Menampilkan header sistem
    printf("========================================\n");
    printf("        SISTEM OPERASIONAL LAUNDRY DEL\n");
    printf("========================================\n");
    printf("Silakan masukkan jumlah pakaian:\n\n");

    // 2. Meminta input dari pengguna
    printf("Masukkan jumlah Baju    : ");
    scanf("%d", &baju);
    
    printf("Masukkan jumlah Celana  : ");
    scanf("%d", &celana);
    
    printf("Masukkan jumlah Jaket   : ");
    scanf("%d", &jaket);
    
    printf("Masukkan jumlah Selimut : ");
    scanf("%d", &selimut);
    
    printf("Masukkan jumlah Rompi   : ");
    scanf("%d", &rompi);

    // 3. Menghitung total semua barang
    total_barang = baju + celana + jaket + selimut + rompi;

    // 4. Menampilkan output rincian dan total barang
    printf("\n========================================\n");
    printf("           RINCIAN DAFTAR LAUNDRY\n");
    printf("========================================\n");
    printf("- Baju       : %d\n", baju);
    printf("- Celana     : %d\n", celana);
    printf("- Jaket      : %d\n", jaket);
    printf("- Selimut    : %d\n", selimut);
    printf("- Rompi      : %d\n", rompi);
    printf("----------------------------------------\n");
    printf("TOTAL BARANG : %d\n", total_barang);
    printf("========================================\n");

    return 0;
}