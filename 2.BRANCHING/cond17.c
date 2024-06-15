// Largest and Second Largest Of Three Numbers.

#include <stdio.h>

int main()
{
    int a, b, c;
    printf("Enter Three Numbers = ");
    scanf("%d%d%d", &a, &b, &c);

    if ((a > b) && (a > c))
    {
        printf("\t%d is the largest", a);
        if (b > c)
            printf("\n\t%d is the second largest", b);
        else
            printf("\n\t%d is the second largest", c);
    }
    else if ((b > a) && (b > c))
    {
        printf("\t%d is the largest", b);
        if (a > c)
            printf("\n\t%d is the second largest", a);
        else
            printf("\n\t%d is the second largest", c);
    }
    else
    {
        printf("\t%d is the largest", c);
        if (a > c)
            printf("\n\t%d is the second largest", a);
        else
            printf("\n\t%d is the second largest", b);
    }

    return 0;
}