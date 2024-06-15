// Finding the sum of 1 - 2 + 3 - 4 + 5 .... n terms.

#include <stdio.h>
#include <math.h>

int main()
{
    int n, i;
    float s = 0;

    printf("Enter A Number = ");
    scanf("%d", &n);

    for (i = 1; i <= n; ++i)
    {
        s = s + i * pow(-1, (i - 1));
    }

    printf("The Sum of The Series upto %2d = %0.f ", n, s);

    return 0;
}
