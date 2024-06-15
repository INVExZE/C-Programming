// To Convert The Temperature From Celsius to Fahrenheit.

#include <stdio.h>

int main()
{
    float c, f;
    
    printf("\nEnter The Celsius Scale =  ");
    scanf("%f", &c);

    f = ( c + 32 )* 9/5 ;
    printf("\nTemperature in Fahrenheit of Celsius = %.2f \n  ", f);

    return 0;
}