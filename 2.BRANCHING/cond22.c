// Program for finding the differenece of two dates.

#include <stdio.h>

int main()
{
    int d1, m1, y1 ;
    int d2, m2, y2 ;
    int d, m, y ;
    long a, b, c ; 

    printf("Enter 1st Date, Month and Year = ");
    scanf("%d%d%d", &d1, &m1, &y1);

    printf("Enter 2nd Date, Month and Year = ");
    scanf("%d%d%d", &d2, &m2, &y2);

    a = d1 + (m1 - 1) * 30 + (y1 - 1) * 365 ;

    b = d2 + (m2 - 1) * 30 + (y2 - 1) * 365 ;

    if (a == b)
        printf("\n\tDifference in given date is Zero.");
    else
    {
        if (a > b)
            c = a - b;
        else
            c = b - a;

        y = c / 365;
        c = c % 365;
        m = c / 30;
        d = c % 30;

        printf("\n\tDifference in Date is %d Days, %d Months and %d Years", d, m, y);
    }

    return 0 ;
}
