// Program for updating the date by 1 day

#include <stdio.h>

int main()
{
    int d, m, y;
    printf("Enter Date, Month and Year = ");
    scanf("%d%d%d", &d, &m, &y);

    if ((d > 31) || (m > 12) || (d < 1) || (m < 1) || (y < 1))
    printf("\tInvalid Date");

    else if ((d > 30) && ((m == 4) || (m == 6) || (m == 9) || (m == 11)))
        printf("\tInvalid Date");

    else if ((m == 2) && (d > 29))
        printf("\tInvalid Date");

    else if ((m == 2) && (d > 28) && (y % 4 != 0))
        printf("\tInvalid Date");

    else
    {
        printf("\t%d.%d.%d Is A Valid Date", d, m, y);

        d++;
        if (d > 31)
        {
            d = 1;
            m++;
        }

        if ((d > 30) && ((m == 4) || (m == 6) || (m == 9) || (m == 11)))
        {
            d = 1;
            m++;
        }

        if ((d > 29) && (m == 2))
        {
            d = 1;
            m++;
        }

        if ((d > 28) && (m == 2) && (y % 4 != 0))
        {
            d = 1;
            m++;
        }

        if (m > 12)
        {
            m = 1;
            y++;
        }

        printf("\n\tUpdated Date is %d.%d.%d\n", d, m, y);
    }

    return 0;
}