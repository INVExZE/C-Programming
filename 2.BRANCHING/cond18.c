//Largest and Second Largest Of Three Numbers.

#include <stdio.h>

int main()
{
    int a, b, c, l, sl;
    printf("Enter Three Numbers = ");
    scanf("%d%d%d", &a , &b , &c );

    l  = a ;

    if ( b > l);
        l = b ;
    if ( c > l);
        l = c ;

    if ( (a==l) && (b==l) && (c==l))
        printf("All the three numbers are equal.");
    
    else
    if ((l==a) && (l==b) || (l==a) && (l==c) || (l==c) && (l==b))
        printf("There are two numbers which are larger and equal.");

    else
    {
        printf("\tLargest is %d", l);
    }


    if ((a==l) && (b>c))
        sl = b ;
    else
        sl = c ;
    if ((b==l) && (a>c))
        sl = a ;
    else
        sl = c ;
    
    if((c==l) && (a>b))
        sl = a ;

    else
        sl = b ;

    printf("\n\tSecond Largest = %d", sl);

return 0;

}