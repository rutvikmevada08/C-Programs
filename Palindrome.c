#include <stdio.h>

int main() {
    int num, originalNum, reversedNum = 0, remainder;

    printf("Enter an integer: ");
    scanf("%d", &num);

    originalNum = num; // Store original number for later comparison

    while (num != 0) {
        remainder = num % 10;                  // Get last digit
        reversedNum = reversedNum * 10 + remainder; // Build reversed number
        num = num / 10;                        // Remove last digit
    }

    if (originalNum == reversedNum)
        printf("%d is a palindrome.\n", originalNum);
    else
        printf("%d is not a palindrome.\n", originalNum);

    return 0;
}
