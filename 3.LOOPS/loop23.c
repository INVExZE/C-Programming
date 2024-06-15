// Finding sum of 1/2 - 2/3 + 3/4 - 4/5 + 5/6 - ...... n terms.

#include <stdio.h>
#include <math.h>

int main()
{
    int n, i, t=1 ;
    float s = 0;

    printf("Enter A Number = ");
    scanf("%d", &n);
    
    for( i=1; i<=n; ++i )
    {
        s = s + i / ( i + 1.0 )*t ;
        t = - t ;
    }

    printf("Sum of series Up to %2d = %.4f", n, s);

    return 0;

}