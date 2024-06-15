// LARGEST OF TWO NUMBERS AND EQUAL CONDITION if else Ladder.

#include <stdio.h>

int main()
{
    int a, b;
    printf("Enter Two Numbers =  ");
    scanf("%d %d", &a, &b);

    if (a > b)
        printf("Largest Number Among %d and %d is %d", a, b, a);

    else
    if (b > a)
        printf("Largest Number Among %d and %d is %d", a, b, b);

    else
        printf("Both The Numbers %d and %d Are Equal ", a, b);

    return 0;
}
