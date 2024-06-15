// Program to find average of three numbers.

#include <stdio.h>

int main()
{
    int a,b,c;
    float avg;
    printf("\nEnter The Three Number =  ");
    scanf("%d%d%d", &a,&b,&c);
    
    avg = (a+b+c)/3;
    printf("\n\tThe average of three numbers %d , %d,%d is = %f\n", a, b, c, avg);

    avg = (a+b+c)/3.0;
    printf("\n\tThe average of three numbers %d , %d ,%d is = %f\n", a, b, c, avg);

    printf("\n\tThe average of three numbers %d , %d ,%d is = %.2f\n", a, b, c, avg);
    return 0;
}