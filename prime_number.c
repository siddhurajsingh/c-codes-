 #include <stdio.h>
#include <stdbool.h>


bool isPrime(int num) {
    if(num < 2) return false;
    for(int i = 2; i*i <= num; i++) {
        if(num % i == 0)
            return false;
    }
    return true;
}

int main() {
    int limit, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &limit);

    for(int i = 2; i < limit; i++) {
        if(isPrime(i)) {
            sum += i;
        }
    }

    
    printf("Sum of all prime numbers less than %d is: %d\n", limit, sum);

    return 0;
}
