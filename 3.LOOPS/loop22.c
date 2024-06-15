// Finding the sum of 1 - 2 + 3 - 4 + 5 .... n terms.

#include <stdio.h>
#include <math.h>

int main()
{
    int n, i, t=1;
    int s = 0;

    printf("Enter A Number = ");
    scanf("%d", &n);

    for (i = 1; i <= n; ++i)
    {
        s = s + i * t ;

        t = -t ;
    }

    printf("The Sum of The Series upto %2d = %d ", n, s);

    return 0;
}
