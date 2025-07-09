#include <stdio.h>

int main() {
    float weight, height, bmi;

    // Input
    printf("Enter your weight in kilograms: ");
    scanf("%f", &weight);

    printf("Enter your height in meters: ");
    scanf("%f", &height);

    // Calculate BMI
    bmi = weight / (height * height);

    // Output BMI value
    printf("Your BMI is: %.2f\n", bmi);

    // Interpret BMI
    if (bmi < 18.5) {
        printf("You are Underweight.\n");
    } else if (bmi >= 18.5 && bmi < 24.9) {
        printf("You have Normal weight.\n");
    } else if (bmi >= 25 && bmi < 29.9) {
        printf("You are Overweight.\n");
    } else {
        printf("You are Obese.\n");
    }

    return 0;
}
