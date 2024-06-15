// Program For Checking A Number +ve -ve or zero .

#include <stdio.h>

int main()
{
    int a;
    printf("Enter A Numbers =  ");
    scanf("%d", &a);

    if (a > 0)
        printf("The Number %d is a Positive Number", a);

    else
    if (a < 0)
        printf("The Number %d is a Negative Number", a);

    else
        printf("The Number %d is zero", a);

    return 0;
}
