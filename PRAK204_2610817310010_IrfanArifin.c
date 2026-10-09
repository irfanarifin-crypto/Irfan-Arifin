#include <stdio.h>

int main() {
    float Radius, Height;
    float Pi = 22.0 / 7.0;
    float Volume, Surface_Area, Circumference;

    printf(" ");
    scanf("%f", &Radius);

    printf(" ");
    scanf("%f", &Height);

    Volume = Pi * Radius * Radius * Height;
    Surface_Area = 2 * Pi * Radius * (Radius + Height);
    Circumference = 2 * Pi * Radius;

    printf("\n");
    printf("Volume = %.2f\n", Volume);
    printf("Luas = %.2f\n", Surface_Area);
    printf("Keliling = %.2f\n", Circumference);

    return 0;
}