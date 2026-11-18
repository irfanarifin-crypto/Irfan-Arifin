#include <stdio.h>
#include <ctype.h>

int main() {
    char sentence[200];
    int vowel = 0, consonant = 0;

    printf("Kalimat : ");
    scanf(" %199[^\n]", sentence);

    for (int i = 0; sentence[i] != '\0'; i++) {
        char c = tolower(sentence[i]);
        if (c == 'a' || c == 'i' || c == 'u' || c == 'e' || c == 'o')
            vowel++;
        else if (c >= 'a' && c <= 'z')
            consonant++;
    }

    printf("Jumlah Vokal : %d\n", vowel);
    printf("Jumlah Konsonan : %d\n", consonant);

    return 0;
}