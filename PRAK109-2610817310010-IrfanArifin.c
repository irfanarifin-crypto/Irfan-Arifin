#include <stdio.h>

int main() {
    float YuZhong_Army_Total = 958.730;
    int Dragon_Altar_Heroes_Total = 5;
    float Army_Per_Heroes = YuZhong_Army_Total / Dragon_Altar_Heroes_Total;

    printf("Jumlah Pasukan yang dibawa Yu Zhong = %.3f\n", YuZhong_Army_Total);
    printf("Jumlah pahlawan = %d\n", Dragon_Altar_Heroes_Total);
    printf("Jumlah pasukan yang harus dikalahkan setiap pahlawan = %.3f\n", Army_Per_Heroes);
    return 0;
}