#include <stdio.h>

int main() {
    float Round = 5, Distance_Traveled = 14, phi = 22.0/7;
    float Park_Perimeter = Distance_Traveled / Round;

    printf("Diketahui :\n");
    printf("Pak Dengklek mengelilingi taman = %.0f Putaran\n", Round);
    printf("Jarak tempuh Pak Dengklek = %.0f Kilometer\n", Distance_Traveled);
    printf("\n");
    printf("Jawaban :\n");
    printf("Jari-jari taman yang dikelilingi Pak Dengklek adalah : %.2f Kilometer\n", (Park_Perimeter / (2 * phi)));
    return 0;
}