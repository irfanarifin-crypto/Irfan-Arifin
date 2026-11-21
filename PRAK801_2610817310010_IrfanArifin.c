#include<stdio.h>

int main(void) {
    int number;
    int *p = &number;

    scanf("%d", &number);

    printf("Nilai variabel = %d", number);
    printf("\nAlamat variabel = %p", (void*)p);
    printf("\nNilai melalui pointer = %d", *p);
    *p *= 2;
    printf("\nNilai setelah diubah lewat pointer = %d", *p);
    return 0;
}