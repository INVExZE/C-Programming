// Program to find area of the circle using define and math.h

#include <stdio.h>
#include <math.h>
#define pi 3.142

int main()
{
    float r;
    float area;
    
    printf("\nEnter The Radius Of Circle =  ");
    scanf("%f", &r);

    area = pi * pow (r,2);
    printf("\n\tThe Area Of The Circle Is = %f\n\n", area);

    return 0;
}