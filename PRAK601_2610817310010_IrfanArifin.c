#include <stdio.h>

int main() {
    int number [10][10];
    int n, m;

    scanf("%d %d", &n, &m);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%d", &number[i][j]);
        }
        for (int j = 0; j < m; j++) {
            printf("%d ", number[i][j]);
        }
        printf("\n");
    }
    return 0;
}