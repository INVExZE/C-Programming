//Largest Of Three Numbers And Equality.

#include <stdio.h>

int main()
{
    int a, b, c, l;
    printf("Enter Three Numbers = ");
    scanf("%d%d%d", &a, &b, &c);
    l = a;

    if (b>l)
        l = b;
    if (c>l)
        l = c;

    if ( (a==l) && (b==l) && (c==l))
        printf("\tAll The Given Numbers Are Equal");

    else 
    if (((l==a) && (l==b)) || ((l==a) && (l==c)) || ((l==b) && (l==c)))
        printf("\tThere Are Two Numbers Which Are Equal And Larger");

    else
    printf("%d is Largest", l);

    return 0;
}