//Program for printing the last digit of an integer in words.

#include <stdio.h>

int main()
{
    int a ;
    printf("Enter Any Number = ");
    scanf("%d", &a );

    switch (a%10)
    {
    case 0 :
        printf("\tZero");
        break;

    case 1 :
        printf("\tOne");
        break;
        
    case 2 :
        printf("\tTwo");
        break;
        
    case 3 :
        printf("\tThree");
        break;
        
    case 4 :
        printf("\tFour");
        break;
        
    case 5 :
        printf("\tFive");
        break;
        
    case 6 :
        printf("\tSix");
        break;
        
    case 7 :
        printf("\tSeven");
        break;
        
    case 8 :
        printf("\tEight");
        break;
        
    case 9 :
        printf("\tNine");
        break;
    
    default:
        printf("\tNot An Integer");
        break;
    }

    return 0;
}
