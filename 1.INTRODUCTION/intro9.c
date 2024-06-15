// Program to find area of the circle.

#include <stdio.h>

int main()
{
    float a;
    float area;
    printf("\nEnter The Radius Of Circle =  ");
    scanf("%f", &a);


    area = 3.14 * a * a;
    printf("\n\tThe area of the circle is = %f\n\n", area);

    return 0;
}