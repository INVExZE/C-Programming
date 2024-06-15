// To Find The Compound Interest.

#include <stdio.h>
#include <math.h>

int main()
{
    float p, t, r, ci;

    printf("\n Enter Princiapl Amount = ");    
    scanf("%f", &p );   

    printf(" Enter Time = ");    
    scanf("%f", &t);

    printf(" Enter Rate Of Interest = ");    
    scanf("%f", &r );
    
    
    ci = p*pow((1+r/100),t)-p ;
    printf("\nCompound Interest is = %.2f \n  ", ci);

    return 0;
}