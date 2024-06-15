// Program to find area of rectangle.

#include <stdio.h>

int main()
{
    int a, b;
    int area;
    printf("\nEnter The Length Of Rectangle =  ");
    scanf("%d", &a);

    printf("\nEnter The Breadth Of Rectangle =  ");
    scanf("%d", &b);

    area = a * b;
    printf("\n\tThe area of the reactangle is = %d\n\n", area);

    return 0;
}