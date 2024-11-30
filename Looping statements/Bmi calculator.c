//Classify person based on BMI
#include <stdio.h>

int main() {
    float weight, height, bmi;

    printf("Enter weight (kg) and height (m): ");
    scanf("%f %f", &weight, &height);

    bmi = weight / (height * height);

    if (bmi < 18.5)
        printf("Underweight\n");
    else if (bmi < 24.9)
        printf("Normal\n");
    else
        printf("Overweight\n");

    return 0;
}
