#include <stdio.h>

int main() {
    float jam;
    float menit, detik;

    printf("=== Kalkulator Konversi Jam ===\n");
    printf("Masukkan jumlah jam: ");
    if (scanf("%f", &jam) != 1) {
        printf("Error: Masukkan angka yang valid.\n");
        return 1;
    }

    menit = jam * 60;
    detik = jam * 3600;

    printf("\nHasil Konversi:\n");
    printf("%.2f jam = %.1f menit\n", jam, menit);
    printf("%.2f jam = %.1f detik\n", jam, detik);

    return 0;
}
