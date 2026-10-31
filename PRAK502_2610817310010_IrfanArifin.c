#include <stdio.h>
#include <math.h>

int absolute(int number) {
    if (number < 0) {
        return -number;
    }
    return number;
}

int count(int value1, int value2) {
    return absolute(value1 - value2);
}

int main()
{
    int a, b, c, d;
    int Result;

    scanf("%d", &a);
    scanf("%d", &c);
    scanf("%d", &b);
    scanf("%d", &d);

    Result = count(a, b) + count(c, d);
    printf("%d", absolute(Result));

    return 0;
}