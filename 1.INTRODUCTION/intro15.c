// To Convert The Temperature From Farenheit to Celsius .

#include <stdio.h>

int main()
{
    float c, f;
    
    printf("\nEnter The Fraenheit Scale =  ");
    scanf("%f", &f);

    c = (f-32)*5/9 ;
    printf("\nTemperature in Celsius of Farenheit = %.2f \n  ", c);

    return 0;
}