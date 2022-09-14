#include <stdio.h>

int main()

{
    int v, t, s;
    printf("Enter the valocity: ");
    scanf("%d", &v);
    printf("Enter the time of past: ");
    scanf("%d", &t);
    s = 2 * v * t;
    printf("The distance of car: %d", s);
}