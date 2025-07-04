#include <stdio.h>

int main() {
    char c;
    printf("Enter an alphabet: ");
    scanf("%c", &c);

    // Check if it is an alphabet
    if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) {
        // Check for vowel (both uppercase and lowercase)
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
            c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') {
            printf("%c is a vowel.\n", c);
        } else {
            printf("%c is a consonant.\n", c);
        }
    } else {
        printf("%c is not an alphabet.\n", c);
    }

    return 0;
}
