//Elgin Gjyzeli AI25
#include <stdio.h>

int main() {
    int seconds;
	int hours;
	int minutes;
	int remaining;

    printf("Enter time in seconds: ");
    scanf("%d", &seconds);

    hours = seconds / 3600;
    remaining = seconds % 3600;
    minutes = remaining / 60;
    remaining = remaining % 60;

    printf(" %d hours: %d minutes: %d seconds \n", hours, minutes, remaining);

    return 0;
}

