//Finding the sum of 1 to N and intermediate.

#include <stdio.h>

int main()
{
    int i, n, s = 0 ;
    printf("Enter A Number = ");
    scanf("%d", &n );

    for (i=1 ; i<=n ; i++)
      {
            s = s + i ;
            printf("Sum of numbers from 1 to %d = %d\n", i , s );

      }  

    printf("Sum of numbers from 1 to %d = %d\n", n , s );

    return 0 ;

}