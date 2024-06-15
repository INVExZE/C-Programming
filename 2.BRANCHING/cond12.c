//PROGRAM FOR UPDATING THE TIME BY 1 SECONDs

#include <stdio.h>
#include <math.h>

int main()
{
    int h, m, s;
    printf("Enter The Time in Hours, Minutes, Second = ");
    scanf("%d%d%d", &h, &m, &s);

    if((h<0) || (m<0) || (s<0))
        printf("\n\t Invalid Data ");

    else 
    if((h>12) || (m>59) || (s>59))
        printf("\n\t Invalid Time Entry ");

    else
    {
        s++;
        if(s>59)

        {
            s = 0;
            m++;
        }

        if (m>59)
        {
            m=0;
            h++;
        }

        if (h>12)
            h = 1;

            printf("\n\t Time Updated by Second is ");
            printf("%2d:%1d%1d", h, m, s);
    }

    return 0;
}