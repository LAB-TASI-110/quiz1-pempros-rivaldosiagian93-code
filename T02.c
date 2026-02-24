#include <stdio.h>

int main() {
    int n;
    
    // 1. Membaca jumlah total data (N)
    scanf("%d", &n);
    
    int nilai[n];
    
    // 2. Membaca deret nilai siswa
    for(int i = 0; i < n; i++) {
        scanf("%d", &nilai[i]);
    }
    
    int kode_kelompok;
    
    // 3. Membaca kode kelompok yang ingin dihitung
    scanf("%d", &kode_kelompok);
    
    int total = 0;
    
    // Menghitung total nilai berdasarkan kelompok yang dipisahkan secara selang-seling
    for(int i = 0; i < n; i++) {
        // Jika Kode 1 mewakili urutan ganjil (indeks 0, 2, 4...)
        if(kode_kelompok == 1 && i % 2 == 0) {
            total += nilai[i];
        } 
        // Jika Kode 2 mewakili urutan genap (indeks 1, 3, 5...)
        else if(kode_kelompok == 2 && i % 2 != 0) {
            total += nilai[i];
        }
    }
    
    // Mencetak hasil akhir
    printf("%d\n", total);
    
    return 0;
}