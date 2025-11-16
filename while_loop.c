#include <stdio.h>

int main() {
    int n, last_digit, first_digit;

    printf("Enter the number: ");
    scanf("%d", &n);

    last_digit = n % 10;

    first_digit = n;
    while (first_digit >= 10) {
        first_digit /= 10;
    }

    printf("First digit: %d\n", first_digit);
    printf("Last digit: %d\n", last_digit);

    return 0;
}