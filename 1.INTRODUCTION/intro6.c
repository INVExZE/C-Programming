// Program to add two integers using one scanf.

#include <stdio.h>

int main()
{
    int a;
    int b;
    printf("Enter The Two Number =  ");
    scanf("%d%d", &a,&b);
    
    int sum;
    sum = a + b;
    printf("The sum of two numbers is = %d\n", sum);
    return 0;
}