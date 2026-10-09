#include <stdio.h>

int main() {
    int number;

    scanf("%d", &number);

    if (number > 0) {
        printf("positif\n");
    } else if (number < 0) {
        printf("negatif\n");
    } else {
        printf("nol\n");
    }

    return 0;
}