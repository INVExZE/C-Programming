// Program to take input as Rupee and Paise and print it as Paise.

#include <stdio.h>

int main()
{
    float rupee;
    int convert;

    printf("\n Enter The Rupee and Paise Amount = ");
    scanf("%f", &rupee);


    convert = (rupee*100) ;
    printf("\n Total Amount in Paise is = %d", convert);

    return 0;

}