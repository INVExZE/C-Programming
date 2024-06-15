//Program to illustrate goto statement with condition 

#include <stdio.h>

int main()
{
    int n ;
    float f ;

    xyz : 
        printf("Enter a float value with 2 digit precision = ");
        scanf( "%f", &f );
        n = f * 100 ;

        if ( n!=f*100 )
        {
            printf("Wrong Input Entered.\n");
            goto xyz ;
        }

        printf("Entered value is %.2f", f );

        return 0 ;

}