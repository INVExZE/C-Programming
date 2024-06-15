// Program to find area of triangle when height and base are given.

#include <stdio.h>

int main()
{
    float b, h, area;

    printf("\nEnter The Base Of Traingle =  ");
    scanf("%f", &b);

    printf("\nEnter The Height Of Sphere =  ");
    scanf("%f", &h);

    area = 0.5 * b * h;
    printf("\nThe Area Of The Triangle Is = %.2f \n  ", area);

    return 0;
}