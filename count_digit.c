#include <stdio.h>
#include <math.h>

int main() {
    int num, digits;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num == 0) {
        digits = 1;
    } else {
        num = abs(num);

        digits = (int)log10(num) + 1;
    }

    printf("Number of digits: %d\n", digits);

    return 0;
}
