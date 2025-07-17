#include <stdio.h>

int main() {
    int num, count = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    // Handle 0 explicitly
    if (num == 0) {
        count = 1;
    } else {
        // Make number positive if it is negative
        if (num < 0) {
            num = -num;
        }
        while (num != 0) {
            num = num / 10;
            count++;
        }
    }

    printf("Number of digits: %d\n", count);

    return 0;
}
