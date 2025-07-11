#include <stdio.h>

int main() {
    int choice;
    float amount, convertedAmount;
    float usdRate = 0.012; // 1 INR = 0.012 USD approx
    float eurRate = 0.011; // 1 INR = 0.011 EUR approx
    float gbpRate = 0.0094; // 1 INR = 0.0094 GBP approx
    float jpyRate = 1.70; // 1 INR = 1.70 JPY approx

    printf("====== Currency Converter ======\n");
    printf("Convert INR to:\n");
    printf("1. USD\n");
    printf("2. EUR\n");
    printf("3. GBP\n");
    printf("4. JPY\n");
    printf("Enter your choice (1-4): ");
    scanf("%d", &choice);

    printf("Enter amount in INR: ");
    scanf("%f", &amount);

    switch(choice) {
        case 1:
            convertedAmount = amount * usdRate;
            printf("%.2f INR = %.2f USD\n", amount, convertedAmount);
            break;
        case 2:
            convertedAmount = amount * eurRate;
            printf("%.2f INR = %.2f EUR\n", amount, convertedAmount);
            break;
        case 3:
            convertedAmount = amount * gbpRate;
            printf("%.2f INR = %.2f GBP\n", amount, convertedAmount);
            break;
        case 4:
            convertedAmount = amount * jpyRate;
            printf("%.2f INR = %.2f JPY\n", amount, convertedAmount);
            break;
        default:
            printf("Invalid choice! Please select from 1 to 4.\n");
            break;
    }

    return 0;
}
