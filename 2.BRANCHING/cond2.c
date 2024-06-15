// LARGEST OF TWO NUMBERS AND EQUAL CONDITION.

#include <stdio.h>

int main()
{
    int a, b;
    printf("Enter Two Numbers =  ");
    scanf("%d %d", &a, &b);

    if (a > b)
        printf("Largest Number Among %d and %d is %d", a, b, a);

    if (b > a)
        printf("Largest Number Among %d and %d is %d", a, b, b);

    if (b == a)
        printf("Both The Numbers %d and %d Are Equal ", a, b);

    return 0;
}
