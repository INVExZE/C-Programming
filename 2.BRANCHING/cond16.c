//Largest Of Three Numbers.

#include <stdio.h>

int main()
{
    int a, b, c;
    printf("Enter Three Numbers = ");
    scanf("%d%d%d", &a , &b , &c );

    if(a>b)
        if (a>c)
            printf("\t%d is the largest", a);

        else
        printf("\t%d is the largest", c);

    else
    if (b>c)
        printf("\t%d is the largest", b);

    else
        printf("\t%d is the largest", c);

    return 0;
        

}
