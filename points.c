#include <stdio.h>

int main ()

{
    int points;

    printf("How many points did you lose?");
    scanf("%i", points);

    if (points < 2)
    {
        printf("You lost fewer points than me.\n");
    }
    else if (points > 2)
    {
        printf("You lost more points than me.\n");
    }
    else
    {
        printf("You just lost the same number of points as me.\n");
    }
}