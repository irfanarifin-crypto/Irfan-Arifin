#include <stdio.h>

int main() {
    int a, b, x, y;
    scanf("%d %d", &a, &b);
    x = a;
    y = b;

    printf("%d %d", x, y);
    while (x != b) {
        if (a < b) {
            x++;
            y--;
        } else {
            x--;
            y++;
        }
        printf(" - %d %d", x, y);
    }
    printf("\n");

    return 0;
}