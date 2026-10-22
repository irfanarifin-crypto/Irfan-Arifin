#include <stdio.h>

int jumlahDigit(int n) {
    if (n == 0)
        return 0;
    return n % 10 + jumlahDigit(n / 10);
}

int main() {
    int n;
    scanf("%d", &n);
    printf("Jumlah digit dari %d adalah %d\n", n, jumlahDigit(n));
    return 0;
}