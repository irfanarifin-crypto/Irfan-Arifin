#include <stdio.h>
#include <string.h>

int main() {
    char code[100], letter[100];
    int star = 0, numberSign = 0;

    scanf(" %99[^\n]", code);
    scanf(" %99[^\n]", letter);

    if (strlen(code) != strlen(letter)) {
        printf("Panjang kalimat berbeda, pesan palsu\n");
        return 0;
    }

    for (int i = 0; i < strlen(code); i++) {
        if (code[i] != letter[i]) {
            printf("#");
            numberSign++;
        } else if (code[i] == ' ') {
            printf(" ");
        } else {
            printf("*");
            star++;
        }
    }

    printf("\n* = %d\n# = %d\n", star, numberSign);

    if (star >= numberSign)
        printf("Pesan Asli\n");
    else
        printf("Pesan Palsu\n");

    return 0;
}