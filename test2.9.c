#include <stdio.h>
int main()
{
    double a, b, sum;
    a = 9.4;
    b = 6.754;
    sum = a + b;
    printf("Sum is: %lf\n", sum);
    printf("Sum is: %0.2lf\n", sum);
    return 0;
}