#include <stdio.h>

int main() {
    float principal, rate, time, simpleInterest;

    // Taking user input
    printf("Enter the principal amount: ");
    scanf("%f", &principal);

    printf("Enter the rate of interest: ");
    scanf("%f", &rate);

    printf("Enter the time in years: ");
    scanf("%f", &time);

    // Calculating Simple Interest
    simpleInterest = (principal * rate * time) / 100;

    // Displaying the result
    printf("Simple Interest = %.2f\n", simpleInterest);

    return 0;
}
