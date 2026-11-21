#include <stdio.h>

struct Peserta {
    char name[50];
    char age[50];
    int skor;
};

int main(void) {
    struct Peserta p = {"", "", 0};

    printf("Nama    : ");
    scanf(" %49[^\n]", p.name);   /* baca satu baris, boleh ada spasi */

    printf("Umur    : ");
    scanf("%49s", p.age);

    printf("Skor    : ");
    scanf("%d", &p.skor);

    printf("\nData Peserta:\n");
    printf("Nama   : %s\n", p.name);
    printf("Umur   : %s tahun\n", p.age);
    printf("Skor   : %d\n", p.skor);
    return 0;
}