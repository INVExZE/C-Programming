// Print all even numbers between M to N using for loop.

#include <stdio.h>

int main()
{
    int i, m, n ;
    printf("Enter The Lower Limit = ");
    scanf("%d", &m );

    printf("Enter The Uper Limit = ");
    scanf("%d" , &n);

    printf("Even Numbers from %d to %d are \n\t", n , m );

    for ( i=m ; i<=n ; i++ )
        if (i%2==0)
            printf("%5d", i );

    return 0 ;

}