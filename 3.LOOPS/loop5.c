// Print the multiplication table of a number.

#include <stdio.h>

int main()
{
    int i, n ;
    printf("Enter The Number Whose Table You Want To Print = ");
    scanf("%d", &n );

    printf("Multiplication Table Of %d is = \n", n );

    for ( i=1 ; i<= 10 ; i++ )
        printf("%5d", i*n );

    return 0 ;
}