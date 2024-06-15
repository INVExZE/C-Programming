//Finding sum of 1/2 + 2/3 + 3/4 + 4/5 + ............ + n/(n+1).

#include <stdio.h>

int main()
{
    int n , i ;
    float s = 0 ;

    printf("Enter a Number = ");
    scanf("%d", &n);

    for ( i = 1; i <= n; ++i )
    
        s = s + i / ( i + 1.0 );

        printf("Sum of the series = %.3f\n", s);

        return 0;
        
}
