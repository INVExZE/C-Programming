// Program to take input as Rupee ana Paise and print it as Paise.

#include <stdio.h>

int main()
{
    int rupee, paise;
    int convert;

    printf("\n Enter The Rupee Amount = ");
    scanf("%d", &rupee);

    printf("\n Enter The Paise Amount = ");
    scanf("%d", &paise);

    convert = (rupee*100) + paise ;
    printf("\n Total Amount in Paise is = %d", convert);

    return 0;

}