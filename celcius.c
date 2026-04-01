#include <stdio.h>

int main() {
    float celcius, fahrenheit, kelvin;
    int pilihan;

    do {
        printf("\n=== PROGRAM KONVERSI SUHU ===\n");
        printf("1. Konversi Celsius\n");
        printf("2. Keluar\n");
        printf("Pilih menu: ");
        scanf("%d", &pilihan);

        if (pilihan == 1) {
            printf("\nMasukkan suhu dalam Celsius: ");
            scanf("%f", &celsius);

            // Konversi
            fahrenheit = (celsius * 9/5) + 32;
            kelvin = celsius + 273.15;

            // Output utama
            printf("\n=== HASIL KONVERSI ===\n");
            printf("Celsius    : %.2f C\n", celsius);
            printf("Fahrenheit : %.2f F\n", fahrenheit);
            printf("Kelvin     : %.2f K\n", kelvin);

            // Keterangan suhu
            printf("\n=== KETERANGAN ===\n");
            if (celsius < 0) {
                printf("Suhu sangat dingin ❄️\n");
            } else if (celsius >= 0 && celsius <= 30) {
                printf("Suhu normal 🌤️\n");
            } else {
                printf("Suhu panas 🔥\n");
            }

        } else if (pilihan == 2) {
            printf("Terima kasih!\n");
        } else {
            printf("Pilihan tidak valid!\n");
        }

    } while (pilihan != 2);

    return 0;
}
