//Elgin Gjyzeli AI25
#include <stdio.h>

int main() {
    float weight;
    float height;
    float bmi;

    printf("Enter weight in kg: ");
    scanf("%f", &weight);

    printf("Enter height in meters: ");
    scanf("%f", &height);

    bmi = weight / (height * height);

    printf("BMI = %f\n", bmi);

    return 0;
}
