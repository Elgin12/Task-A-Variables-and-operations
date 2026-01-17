//Elgin Gjyzeli AI25
#include <stdio.h>

int main() {
    int n, rev;

    printf("Enter a number (1 to 3 digits): ");
    scanf("%d", &n);

    rev = (n % 10) * 100 + ((n / 10) % 10) * 10 + (n / 100);
    rev /= (rev % 100 == 0) ? 100 : (rev % 10 == 0) ? 10 : 1;

    printf("Reversed number: %d\n", rev);
    return 0;
}


