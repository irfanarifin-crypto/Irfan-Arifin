#include <stdio.h>

int maximum(int a, int b) {
    if (a > b) {
        return a;
    }
    return b;
}

int minimum(int a, int b) {
    if (a < b) {
        return a;
    }
    return b;
}

int main() {
    int limit = 0;
    int max = -100000;
    int minim = 100000;
    int number;
    scanf("%d", &number);
    while (limit < number) {
        int value;
        scanf("%d", &value);
        max = maximum(max, value);
        minim = minimum(minim, value);
        limit++;
    }
    printf("%d %d", max, minim);
}