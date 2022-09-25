#include <stdio.h>

int main()

{
    float base, height, area;
    printf("Enter the value of base: ");
    scanf("%f", &base);
    printf("Enter the value of height: ");
    scanf("%f", &height);
    area = .5 * base * height;
    printf("The value of area is: %f\n", area);
}