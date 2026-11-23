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

    int highest = 0;
    for (int i = 1; i < n; i++) {
        if (p[i].skor > p[highest].skor) {
            highest = i;
        }
    }

    printf("Peserta dengan skor tertinggi adalah %s dengan skor %d\n",p[highest].name, p[highest].skor);
    return 0;
}
