//Elgin Gjyzeli AI25
#include <stdio.h>

int main() {
    int n;
	int a;
	int b;
	int c;

    printf("Enter a number (max 3 digits): ");
    scanf("%d", &n);

    a = n % 10;
    b = (n / 10) % 10;
    c = n / 100;

    printf("Reversed number: %d%d%d\n", a, b, c);

    return 0;
}

