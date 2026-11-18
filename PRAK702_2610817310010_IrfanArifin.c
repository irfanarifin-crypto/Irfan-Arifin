#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char word[100], lower[100];
    int palindrome = 1;

    scanf("%s", word);
    int n = strlen(word);

    for (int i = 0; i < n; i++)
        lower[i] = tolower(word[i]);
    lower[n] = '\0';

    for (int i = 0; i < n / 2; i++)
        if (lower[i] != lower[n - 1 - i])
            palindrome = 0;

    if (palindrome)
        printf("Kata '%s' adalah palindrom\n", word);
    else
        printf("Kata '%s' bukan palindrom\n", word);

    return 0;
}