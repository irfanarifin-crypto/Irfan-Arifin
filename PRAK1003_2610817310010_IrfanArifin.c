#include <stdio.h>

int digits_number(int n) {
    if (n == 0)
        return 0;
    return n % 10 + digits_number(n / 10);
}

int main() {
    int n;
    scanf("%d", &n);
    printf("Jumlah digit dari %d adalah %d\n", n, digits_number(n));
    return 0;
}
