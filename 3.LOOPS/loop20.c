// Finding the sum of cubes of  1 + 8 + 27 + 64 ........ upto N terams.

#include <stdio.h>
#include <math.h>

int main()
{
    int i, n;
    double s = 0;

    printf("Enter A Number  = ");
    scanf("%d", &n);

    for (i = 1; i <= n; ++i)
    {
        s = s + pow(i, i);

        printf("\nThe Sum of The Series upto %2d = %g ", i, s);
    }

    printf("\n\n Sum of Series for first %2d terms = %g ", n, s);

    return 0;
}