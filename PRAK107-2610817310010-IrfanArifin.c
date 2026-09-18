#include <stdio.h>

int main() {
    int Length_A = 4;
    int Length_B = 5;
    int Length_C = 7;
    int Land_Price_Per_Meter = 85000;

    printf("Diketahui :\n");
    printf("Panjang sisi segitiga beruturut-turut adalah %d , %d , %d\n", Length_A, Length_B, Length_C);
    printf("Keliling Tanah Pak Dengklek adalah %d\n", Length_A + Length_B + Length_C);
    printf("Harga tanah Per Meter adalah %d\n", Land_Price_Per_Meter);
    printf("Jawaban :\n");
    printf("Biaya yang diperlukan Pak Dengklek adalah : RP %d\n", (Length_A + Length_B + Length_C) * Land_Price_Per_Meter);

    return 0;
}