#include<stdio.h>

int main(){
    float radius, area;


    printf("enter the length of the radius of the circle: ");
    scanf("%f", &radius);

    area = 3.14 * radius * radius;
    printf("enter the area of the cirle is: %f\n", area);
    return 0;
}