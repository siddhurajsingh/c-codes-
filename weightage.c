#include <stdio.h>

int main() {
    float x, y, z;

    printf("Enter C Programming marks (X): ");
    scanf("%f", &x);

    printf("Enter Data Science marks (Y): ");
    scanf("%f", &y);

    z = (30.0/100.0) * x + (70.0/100.0) * y;

    printf("The weighted total marks (Z) is: %.2f\n", z);

    return 0;
}
