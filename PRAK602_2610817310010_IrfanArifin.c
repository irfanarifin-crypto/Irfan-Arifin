#include <stdio.h>

int main () {
    int room [20];
    int n;

    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &room[i]);
    }
    for (int i = 0; i < n ; i++) {
        printf("%d ", room[i] * (i + 1));
    }
    return 0;
}