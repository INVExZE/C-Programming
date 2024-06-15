// Check For Odd And Even Numbers Using if else .

#include <stdio.h>

int main()
{
    int a;
    printf("Enter A Numbers =  ");
    scanf("%d", &a);

    if (a % 2 == 0 )
        printf("%d Is An Even Number", a);

    else
        printf(" %d Is An Odd Number", a);


    return 0;
}
