#include <stdio.h>

int main() {
    int shoe_A = 400000;
    int shoe_B = 350000;

    printf("Harga sepatu A adalah %d\n", shoe_A);
    printf("Harga sepatu B adalah %d\n", shoe_B);
    printf("Sepatu A mendapat diskon 13%% sehingga harganya menjadi %d\n",(int)(shoe_A - (shoe_A * 0.13)));
    printf("Sepatu B mendapat diskon 21%% sehingga harganya menjadi %d\n",(int)(shoe_B - (shoe_B * 0.21)));

    return 0;
}