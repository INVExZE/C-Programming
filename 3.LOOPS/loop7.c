//Finding the sum of 1 to N.

#include <stdio.h>

int main()
{
    int i, n;
    printf("Enter A Number = ");
    scanf("%d", &n );

    i = (n*(n+1))/2 ;
    printf("The Sum Of The Numbers From 1 to %d are = %d ", n, i );

    return 0;
}