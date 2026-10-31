#include <stdio.h>

int main() {
    int choice;
    float a, b;

    while (1) {
        printf("Pilih program\n");
        printf("1. Penjumlahan\n");
        printf("2. Pengurangan\n");
        printf("3. Perkalian\n");
        printf("4. Pembagian\n");
        printf("5. Exit\n");
        printf("Masukkan Pilihan : ");
        scanf("%d", &choice);

        if (choice == 5) {
            printf("Terimakasih, telah menggunakan kalkulator Irfan Arifin\n");
            break;
        } else if (choice >= 1 && choice <= 4) {
            printf("Masukkan nilai pertama : ");
            scanf("%f", &a);
            printf("Masukkan nilai kedua : ");
            scanf("%f", &b);

            if (choice == 1)
                printf("Hasil penjumlahan antara %.2f dengan %.2f adalah %.2f\n", a, b, a + b);
            else if (choice == 2)
                printf("Hasil pengurangan antara %.2f dengan %.2f adalah %.2f\n", a, b, a - b);
            else if (choice == 3)
                printf("Hasil perkalian antara %.2f dengan %.2f adalah %.2f\n", a, b, a * b);
            else
                printf("Hasil pembagian antara %.2f dengan %.2f adalah %.2f\n", a, b, a / b);
        } else {
            printf("Input anda salah, silahkan coba lagi\n");
        }
    }
    return 0;
}
