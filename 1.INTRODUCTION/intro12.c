// Program to find volume of sphere.

#include <stdio.h>
#include <math.h>
#define pi 3.142

int main()
{
    float r, volume ;
    float area;
    
    printf("\nEnter The Radius Of Sphere =  ");
    scanf("%f", &r);

    volume = 4/3 * pi * pow (r, 3);
    printf("\n\tThe Volume Of The Sphere Is = %f\n\n", volume);

    volume = 4.0/3 * pi * pow (r, 3);
    printf("\n\tThe Volume Of The Sphere Is = %.2f\n\n", volume);

    return 0;
}