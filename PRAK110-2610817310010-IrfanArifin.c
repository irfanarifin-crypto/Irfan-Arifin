#include <stdio.h>
#include <math.h>

int main() {
    int base = 5, height = 12, perimeter = 30, area = 30;

    int hypotenuse = sqrt((base * base) + (height * height));
    printf("diketahui : \n");

    printf("Alas = %d cm\n", base);
    printf("Tinggi = %d cm\n", height);
    printf("\n");
    printf("Jawab : \n");
    printf("Sisi A = %d cm\n", height);
    printf("Sisi B = %d cm\n", hypotenuse);
    printf("Sisi C = %d cm\n", base);
    printf("Keliling = %d cm\n", perimeter);
    printf("Luas = %d cm\n", area);

    return 0;
}