//Elgin Gjyzeli AI25
#include <stdio.h>

int main() {
    float n;
    int integerPart;
    float decimalPart;

    printf("Enter a float number: ");
    scanf("%f", &n);

    integerPart = n;
    decimalPart = n - integerPart;

    printf("Integer part: %d\n", integerPart);
    printf("Decimal part: %f\n", decimalPart);

    return 0;
}

