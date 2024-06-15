// Program to find the sum of the series 1+4+7+10 upto N terms
// Also print the series.

#include <stdio.h>

int main()
{
    int n, i;
    int j = 1;
    int s = 0;

    printf("Enter A Number = ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        s = s + j;
        printf("%d", j);

        if (i < n)
            printf(" + ");

        j = j + 3;
    }

    printf(" = %d", s);

    return 0;
}