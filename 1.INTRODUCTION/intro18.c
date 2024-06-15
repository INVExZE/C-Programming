//To Perform All Arithmetic Operations On Two Integers.

#include <stdio.h>
#include <math.h>

int main()
{
    int a, b , c;
    printf("Enter Two Number = ");
    scanf("%d %d", &a, &b);
    
    c = a + b;
    printf("\n Sum Of %d and %d is = %d ", a , b,  c);
    c = a - b;
    printf("\n Difference Of %d and %d is = %d ", a , b,  c);
    c = a * b;
    printf("\n Multiplication Of %d and %d is = %d ", a , b,  c);
    c = a / b;
    printf("\n Divison Of %d and %d is = %d \n \n ", a , b,  c);

    return 0;

}