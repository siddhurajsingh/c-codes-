#include <stdio.h>

int main() {
    int a, b;
    float result;

    printf("Enter first number: ");
    scanf("%d", &a);

    printf("Enter second number: ");
    scanf("%d", &b);

    if (b == 0) {
        printf("Error: Division by zero is not allowed.\n");
        return 0;
    }

    result = (float)a / b;

    printf("The result of %d / %d is: %.2f\n", a, b, result);

    return 0;
}
