#include <stdio.h>
#include <math.h>   // for pow() and sqrt()

int main() {
    int choice;
    double base, exponent, result;

    printf("=== Power and Square Root Calculator ===\n");
    printf("1. Calculate Power (x^y)\n");
    printf("2. Calculate Square Root (sqrt(x))\n");
    printf("Enter your choice (1 or 2): ");
    scanf("%d", &choice);

    switch(choice) {
        case 1:
            printf("Enter base (x): ");
            scanf("%lf", &base);
            printf("Enter exponent (y): ");
            scanf("%lf", &exponent);
            result = pow(base, exponent);
            printf("%.2lf ^ %.2lf = %.2lf\n", base, exponent, result);
            break;
        case 2:
            printf("Enter the number to find square root: ");
            scanf("%lf", &base);
            if(base < 0) {
                printf("Square root of negative number is not defined in real numbers.\n");
            } else {
                result = sqrt(base);
                printf("Square root of %.2lf = %.2lf\n", base, result);
            }
            break;
        default:
            printf("Invalid choice. Please enter 1 or 2.\n");
    }

    return 0;
}
