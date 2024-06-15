//Largest Of Three Numbers.

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

    printf("%d is Largest", l);

    return 0;
}