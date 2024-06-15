//Program for doing arithematic operations of two integers based on an operator using if...else .

#include <stdio.h>

int main()
{
    int a, b ;
    char op;
    
    
    printf("Enter two integer = ");
    scanf("%d%d", &a , &b );

    printf("Enter an arithematic operator to perform + , - , * , / and  = ");
    scanf("%c", &op );

    op = getchar();

    if (op=='+')
        printf("The sum of the two integer is = %d ", a + b );

    else
    if (op=='-')
        printf("The difference of the two integer is = %d ", a - b );

    else
    if (op=='*')
        printf("The multiplicatio of the two integer is = %d ", a * b );

    else
    if (op=='/')
        printf("The division of the two integer is = %d ", a / b );

    else
    if (op=='%')
        printf("The remainder of the two integer is = %d ", a % b );

    else    
        printf("Not A Valid Arithematic Operator");

    return 0;
    
}