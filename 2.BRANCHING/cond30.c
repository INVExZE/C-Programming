// Program to illustrate goto statement for looping.

#include <stdio.h>

int main()
{
    int i, n;
    printf("Enter a number = ");
    scanf("%d", &n);

    i = 1;

label:
    printf("%8d", i);
    i = i + 1;
    if (i <= n)
        goto label;

    return 0;
}