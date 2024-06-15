//LARGEST AMONG THREE NUMBERS.

#include <stdio.h>
 
int main()
{
    int a , b , c ;
    printf("Enter Three Numbers = ");
    scanf("%d%d%d", &a, &b, &c );

    if( (a>b) && (a>c) )
    {
        printf("\n\tAmong %d , %d and %d . \n\t%d is the Largest.\n\t", a , b , c , a);
    }

    else 
        if( (b>a) && (b>c) )
    {
        printf("\n\tAmong %d , %d and %d . \n\t%d is the Largest.\n\t", a , b , c , b);
    }

        else
    
        printf("\n\tAmong %d , %d and %d . \n\t%d is the Largest.\n\t", a , b , c , c);
    

return 0;

}