#include <stdio.h>
#include <string.h>

int main() {
    char text[200];

    scanf(" %199[^\n]", text);

    if (strlen(text) > 20) {
        text[20] = '\0';
        printf("%s...\n", text);
    } else {
        printf("%s\n", text);
    }

    return 0;
}