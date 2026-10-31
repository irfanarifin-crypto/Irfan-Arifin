#include <stdio.h>

int main() {
    int n, k, i, j, result, total = 0;
    scanf("%d %d", &n, &k);

    for (i = 1; i <= n; i++) {
        result = 0;
        for (j = i; j >= 1; j--) {
            if (j != i) printf(" + ");
            printf("(%d * %d)", j, k);
            result += j * k;
        }
        printf(" = %d\n", result);
        total += result;
    }
    printf("%d\n", total);
    return 0;
}
