#include <stdio.h>
#include <string.h>

int main() {
    char first[100], last[100];
    char full[200];
    int length = 0;

    printf("Nama Depan : ");
    fgets(first, sizeof(first), stdin);
    first[strcspn(first, "\n")] = '\0';

    printf("Nama Belakang : ");
    fgets(last, sizeof(last), stdin);
    last[strcspn(last, "\n")] = '\0';

    strcpy(full, first);
    strcat(full, " ");
    strcat(full, last);

    for (int i = 0; full[i] != '\0'; i++) {
        if (full[i] != ' ') {
            length++;
        }
    }

    printf("Nama Lengkap : %s\n", full);
    printf("Panjang Nama (tanpa spasi) : %d\n", length);

    return 0;
}