#include <stdio.h>

void single_digit(int n) {
    char *ones[] = {"", "one ", "two ", "three ", "four ", "five ", "six ", "seven ", "eight ", "nine "};
    printf("%s", ones[n]);
}

void two_digits(int n) {
    char *tens[] = {"ten ", "eleven ", "twelve ", "thirteen ", "fourteen ", "fifteen ", "sixteen ",
                    "seventeen ", "eighteen ", "nineteen "};
    char *tens_multiple[] = {"", "", "twenty ", "thirty ", "forty ", "fifty ",
                             "sixty ", "seventy ", "eighty ", "ninety "};
    
    if (n < 10)
        single_digit(n);
    else if (n >= 10 && n < 20)
        printf("%s", tens[n - 10]);
    else {
        printf("%s", tens_multiple[n / 10]);
        single_digit(n % 10);
    }
}

void convert_to_words(int n) {
    if (n == 0) {
        printf("zero");
        return;
    }

    if (n >= 10000000) {
        single_digit(n / 10000000);
        printf("crore ");
        n = n % 10000000;
    }
    if (n >= 100000) {
        two_digits(n / 100000);
        printf("lakh ");
        n = n % 100000;
    }
    if (n >= 1000) {
        two_digits(n / 1000);
        printf("thousand ");
        n = n % 1000;
    }
    if (n >= 100) {
        single_digit(n / 100);
        printf("hundred ");
        n = n % 100;
    }
    if (n > 0) {
        printf("and ");
        two_digits(n);
    }
}

int main() {
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);

    printf("Number in words: ");
    convert_to_words(number);
    printf("\n");

    return 0;
}
