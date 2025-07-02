#include <stdio.h>

int main() {
    int n, sum = 0, digit;

    printf("Enter an integer: ");
    scanf("%d", &n);

    // Handle negative numbers
    if (n < 0) {
        n = -n;
    }

    while (n != 0) {
        digit = n % 10;   // get last digit
        sum = sum + digit; // add to sum
        n = n / 10;       // remove last digit
    }

    printf("Sum of digits = %d\n", sum);
    return 0;
}
