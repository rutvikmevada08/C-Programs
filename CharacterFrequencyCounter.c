#include <stdio.h>
#include <string.h>

int main() {
    char str[1000];
    int freq[256] = {0}; // For all ASCII characters

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Count frequency of each character
    for (int i = 0; i < strlen(str); i++) {
        unsigned char ch = str[i];
        freq[ch]++;
    }

    printf("\nCharacter Frequencies:\n");
    for (int i = 0; i < 256; i++) {
        if (freq[i] > 0 && i != '\n') {
            printf("'%c' : %d\n", i, freq[i]);
        }
    }

    return 0;
}
