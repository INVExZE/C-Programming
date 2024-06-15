// Print 1 to N using for loop.

#include <stdio.h>

int main()
{
    int i , n ;
    printf("Enter The Uppper Limit = ");
    scanf("%d", &n );

    printf("Numbers from 1 to %d are = ", n );

    for ( i = 1; i <= n ; i++)
    {
        printf("%5d", i );
    }

    return 0 ;
    
}