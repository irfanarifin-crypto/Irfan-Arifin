#include <stdio.h>
#include <math.h>

int main() {
    float Height, Hypotenuse, Base, Perimeter, Area;

    printf(" ");
    scanf("%f", &Height);

    printf(" ");
    scanf("%f", &Hypotenuse);

    Base = sqrt(Hypotenuse * Hypotenuse - Height * Height);
    Perimeter = Height + Hypotenuse + Base;
    Area = 0.5 * Height * Base;

    printf("\n");
    printf("Alas = %.0f cm\n", Base);
    printf("Tinggi = %.0f cm\n", Height);
    printf("Keliling = %.0f cm\n", Perimeter);
    printf("Luas = %.0f cm^2\n", Area);

    return 0;
}