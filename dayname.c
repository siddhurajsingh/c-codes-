#include <stdio.h>

int main() {
    int day;
    printf("enter day number (1-3): ");
    scanf("%d", &day);

    if (day == 1)
        printf("monday\n");
    else if (day == 2)
        printf("tuesday\n");
    else if (day == 3)
        printf("wednessday\n"); 
    else
        printf("invalid\n");

    return 0; 
}