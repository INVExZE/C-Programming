//This program checks for validity of entered date.

#include <stdio.h>

int main()
{
    int d, m, y;
    printf("Enter Date , Month and Year = ");
    scanf("%d%d%d", &d , &m , &y );

    if ((d<1) || (m<1) ||(y<1) ||(d>31) ||(m>12))
        printf("The Entered Date is Invalid");

    else 
    if((d>30) && ((m==4) || (m==6) && (m==9) && (m==11)))
        printf("\tInvalid Date");

    else
    if((m==2) && (d>29))
        printf("\tInvalid Date");

    else
    if((m==2) && (d>28) && (y%4!=0))
        printf("\tInvalid Date");

    else
        printf("\t%d.%d.%d Is A Valid Date", d, m, y);

return 0;

}
    