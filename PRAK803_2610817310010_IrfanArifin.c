#include <stdio.h>

struct Peserta {
    char name[50];
    int age;
    int skor;
};

int main(void) {
    struct Peserta p = {"", 0, 0};

    printf("Nama : ");
    scanf(" %49[^\n]", p.name);

    printf("Umur : ");
    scanf("%d", &p.age);

    printf("Skor : ");
    scanf("%d", &p.skor);

    printf("\nData Peserta:\n");
    printf("Nama : %s\n", p.name);
    printf("Umur : %d tahun\n", p.age);
    printf("Skor : %d\n", p.skor);
    return 0;
}
