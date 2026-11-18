#include <stdio.h>

int main() {
    int n;
    char text[100];
    scanf("%d", &n);

    int a[100][100], b[100][100];

    scanf(" %[^\n]", text); 
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            scanf("%d", &a[i][j]);

    scanf(" %[^\n]", text);
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            scanf("%d", &b[i][j]);

    printf("Matriks AXB\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            int result = 0;
            for (int k = 0; k < n; k++)
                result += a[i][k] * b[k][j];

            if (j > 0) printf(" ");
            printf("%d", result);
        }
        printf("\n");
    }

    return 0;
}