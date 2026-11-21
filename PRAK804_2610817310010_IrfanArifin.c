#include <stdio.h>

struct Peserta {
    char name[50];
    int age;
    int skor;
};

int main(void) {
    struct Peserta p[10];
    int n;

    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%49s %d %d", p[i].name, &p[i].age, &p[i].skor);
    }

    int tertinggi = 0;
    for (int i = 1; i < n; i++) {
        if (p[i].skor > p[tertinggi].skor) {
            tertinggi = i;
        }
    }

    printf("Peserta dengan skor tertinggi adalah %s dengan skor %d\n",
           p[tertinggi].name, p[tertinggi].skor);
    return 0;
}