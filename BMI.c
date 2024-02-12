#include <stdio.h>
#include <math.h>

float calculateBMI(float weight, float height) {
    return weight / (height * height);
}

int main() {
    float weight, height, bmi;

    printf("Enter your weight (in kilograms): ");
    scanf("%f", &weight);

    printf("Enter your height (in meters): ");
    scanf("%f", &height);

    bmi = calculateBMI(weight, height);

    printf("Your BMI is: %.2f\n", bmi);

    return 0;
}
