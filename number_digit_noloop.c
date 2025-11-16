#include <stdio.h>
#include <math.h>

int main() {
    int num;
    int digitCount;

    printf("Enter a number: ");
    scanf("%d", &num);

    
    if (num == 0) {
        digitCount = 1;
    } else {
        
        digitCount = (int)log10(abs(num)) + 1;
    }

    printf("Number of digits: %d\n", digitCount);

    return 0;
}