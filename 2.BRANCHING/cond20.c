//PROGRAM FOR UPDATING THE DAY BY 1.

#include <stdio.h>

int main()
{
    int d, m, y ;
    printf("Enter the Date, Month and Year = ");
    scanf("%d%d%d", &d, &m, &y );

    if ((d<0) || (m<0) || (y<0))
        printf("\n\tInvalid Date\n.");
        
    
    d++ ;

    if (d>31)
        {
            d = 1 ;
            m++ ;
        }

    if ((d>30) && ((m==4) || (m==6) || (m==9) || (m==11)))
        {
            d = 1 ;
            m++;
        }

    if ((d>29) && (m==2))
        {
            d = 1 ;
            m++;
        }
    
    if ((d>28) && (m==2) && (y%4!=0))
        {
            d = 1 ;
            m++;
        }

    if (m>12)
    {
        m = 1 ;
        y++ ;
    }
    

printf("\n\tUpdated Date is %d.%d.%d\n", d , m, y );


return 0;

}
