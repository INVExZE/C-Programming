//Program for doing arithematic operations of two integers based on an operator.

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

    

    switch (op)
    {
    case '+' :
        printf("The Sum Of The Two Integers are %d", a+b );
        break;

    case '-' :
        printf("The Difference Of The Two Integers are %d", a-b );
        break;

    case '*' :
        printf("The Multiplication Of The Two Integers are %d", a*b );
        break;

    case '/' :
        printf("The Division Of The Two Integers are %d", a/b );
        break;

    case '%' :
        printf("The Remainder Of The Two Integers are %d", a%b );
        break;
    
    default:
        printf("Not A Valid Arithematic Operator");
        break;
    }

    return 0;
}