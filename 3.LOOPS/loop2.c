// Print M to N using for loop.

#include <stdio.h>

int main()
{
    int i, m, n ;
    printf("Enter The Lower Limit = ");
    scanf("%d", &m );

    printf("Enter The Uper Limit = ");
    scanf("%d" , &n);

    printf("Numbers from %d to %d are \n\t", n , m );

    for ( i=m ; i<=n ; i++ )
        printf("%5d", i );

    return 0 ;
}