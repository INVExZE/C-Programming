// Program to find the sum of the series 1+4+7+10 upto N terms.

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
        j = j + 3;
    }

    j = j - 3;

    printf("\tThe Sum Of The Number From 1 to %d in Step Of Three is = %d", j, s);

    return 0;
}