#include <stdio.h>

int main() {
    float weight, height, bmi;

    printf("Enter weight (kg): ");
    scanf("%f", &weight);

    printf("Enter height (meters): ");
    scanf("%f", &height);

    bmi = weight / (height * height);

    printf("Your BMI is: %.2f\n", bmi);

    if (bmi < 18.5)
        printf("Underweight\n");
    else if (bmi < 24.9)
        printf("Normal weight\n");
    else if (bmi < 29.9)
        printf("Overweight\n");
    else
        printf("Obese\n");

    return 0;
}
