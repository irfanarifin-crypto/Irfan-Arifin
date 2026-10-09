#include <stdio.h>

int main() {
    float First_Value, Second_Value, Result;

    printf("Masukkan Nilai Pertama : ");
    scanf("%f", &First_Value);

    printf("Masukkan Nilai Kedua : ");
    scanf("%f", &Second_Value);

    Result = First_Value + Second_Value;

    printf("\n");
    printf("Hasil dari penjumlahan nilai pertama \"%g\" dan nilai kedua \"%g\" adalah \"%.2f\"\n", First_Value, Second_Value, Result);

    return 0;
}