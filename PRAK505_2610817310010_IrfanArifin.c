#include <stdio.h>

void Biodata(int year, char name[], char place[]) {
    int current_year = 2020;
    int age = current_year - year;

    printf("Perkenalkan Nama Saya : %s\n", name);
    printf("Umur Saya : %d\n", age);
    printf("Saya Adalah Angkatan : %d\n", current_year);
    printf("Asal Saya dari : %s\n", place);
}

int main() {
    int yearBirth;
    char A[20], B[15];
    scanf(" %d", &yearBirth);
    scanf(" %[^\n]%*c", A);
    scanf(" %[^\n]%*c", B);
    Biodata(yearBirth, A, B);
    return 0;
}