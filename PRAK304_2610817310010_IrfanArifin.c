#include <stdio.h>

int main() {
    int number;

    scanf("%d", &number);

    if (number < 0 || number > 99) {
        printf("Anda Menginput Melebihi Limit Bilangan\n");
    } else if (number == 0) {
        printf("Nol\n");
    } else if (number <= 9) {
        printf("Satuan\n");
    } else if (number >= 11 && number <= 19) {
        printf("Belasan\n");
    } else {
        printf("Puluhan\n");
    }

    return 0;
}