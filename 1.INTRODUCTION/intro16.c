// To Find The Simple Interest.

#include <stdio.h>

int main()
{
    float p, t, r, si;

    printf("\n Enter Princiapl Amount = ");    
    scanf("%f", &p );   

    printf(" Enter Time = ");    
    scanf("%f", &t);

    printf(" Enter Rate Of Interest = ");    
    scanf("%f", &r );
    
    
    si = p*t*r/100 ;
    printf("\nSimple Interest is = %.2f \n  ", si);

    return 0;
}