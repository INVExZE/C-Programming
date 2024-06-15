//Program for printing the last digit of an integer in words using if...else .

#include <stdio.h>

int main()
{
    int a ;
    printf("Enter Any Number = ");
    scanf("%d", &a );

    if (a%10==0)
        printf("\tZero");

    else
    if (a%10==1)
        printf("\tOne");

    else
    if (a%10==2)
        printf("\tTwo");

    else
    if (a%10==3)
        printf("\tThree");

    else
    if (a%10==4)
        printf("\tFour");

    else
    if (a%10==5)
        printf("\tFive");

    else
    if (a%10==6)
        printf("\tSix");

    else
    if (a%10==7)
        printf("\tSeven");

    else
    if (a%10==8)
        printf("\tEight");

    else
    if (a%10==9)
        printf("\tNight");

    else
    
        printf("\tNot An Integer");

    return 0;
    
}