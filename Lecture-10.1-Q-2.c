#include <stdio.h>

int main() {
    int number;

    printf("Enter any number: ");
    scanf("%d", &number);

    if (number % 3 == 0 && number % 5 == 0)
        printf("The given number is divisible by both 3 & 5.\n");
    else
        printf("The given number is not divisible by both 3 & 5.\n");

    return 0;
}
