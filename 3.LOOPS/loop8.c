//Finding the sum of 1 to N.

#include <stdio.h>

int main()
{
    int i, n, s;
    printf("Enter A Number = ");
    scanf("%d", &n );

    for (i=1 ; i<=n ; i++)
        s += i ;

    printf("Sum of numbers from 1 to %d = %d", n , s );

    return 0 ;


}