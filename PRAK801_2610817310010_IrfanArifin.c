#include<stdio.h>

int main(void) {
    int number;
    int *p = &number;

    scanf("%d", &number);

    printf("Nilai variabel = %d\n", number);
    printf("Alamat variabel = %p\n", (void*)p);
    printf("Nilai melalui pointer = %d\n", *p);
    *p *= 2;
    printf("Nilai setelah diubah lewat pointer = %d\n", *p);
    return 0;
}
