#include <stdio.h>

int main() {
    int a, b, product;

    printf("Enter first number: ");
    scanf("%d", &a);

    printf("Enter second number: ");
    scanf("%d", &b);

    product = a * b;

    printf("The product of %d and %d is: %d\n", a, b, product);

    return 0;
}
