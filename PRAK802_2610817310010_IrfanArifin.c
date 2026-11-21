#include <stdio.h>
void tukar(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main(void) {
    int a, b;
    scanf("%d %d", &a, &b);
    printf("Sebelum ditukar: Andi = %d, Budi = %d\n", a, b);
    tukar(&a, &b);
    printf("Sesudah ditukar: Andi = %d, Budi = %d\n", a, b);
    return 0;
}
