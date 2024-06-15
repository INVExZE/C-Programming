// Finding the sum of squares of  1 + 4 + 9 + 16 ........ upto N terams.

#include <stdio.h>

int main()
{
    int i , n ;
    int s = 0 ;

    printf("Enter A Number N = ");
    scanf("%d", &n );

    for ( i=1 ; i<=n ; i++ )
        s = s + i * i ;

        printf("The Sum of The Series is = %d ", s);

        return 0;
}