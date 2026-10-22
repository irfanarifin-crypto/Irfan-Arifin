#include <stdio.h>

int main() {
    int n, k, i, j, hasil, total = 0;
    scanf("%d %d", &n, &k);

    for (i = 1; i <= n; i++) {
        hasil = 0;
        for (j = i; j >= 1; j--) {
            if (j != i) printf(" + ");
            printf("(%d * %d)", j, k);
            hasil += j * k;
        }
        printf(" = %d\n", hasil);
        total += hasil;
    }
    printf("%d\n", total);
    return 0;
}