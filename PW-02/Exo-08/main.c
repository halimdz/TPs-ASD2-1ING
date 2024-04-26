#include <stdio.h>
#include <stdlib.h>

int main() {
    char s[100];
    int i, vowels = 0, consonants = 0;

    printf("Enter a string: ");
    gets(s);

    for (i = 0; s[i] != '\0'; i++) {
        // Convert character to lowercase
        s[i] = tolower(s[i]);

        // Check if the character is a vowel
        if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u') {
            vowels++;
        }

        else if ((s[i] >= 'a' && s[i] <= 'z')) {
            consonants++;
        }
    }

    printf("Vowels: %d\n", vowels);
    printf("Consonants: %d\n", consonants);

    return 0;
}
