//PROGRAM FOR FINDING THE AREA OF TRIANGLE WHEN 3 SIDES ARE GIVEN

#include <stdio.h>
#include <math.h>

int main()
{
    float a , b, c ;
    printf("Enter The Sides Of The Triangle A , B , C = ")  ;
    scanf("%f%f%f", &a, &b , &c );

    if ((a<=0) || (b<=0) || (c<=0))
    
        printf("Given sides cannot form a triangle");
    

    else 
        if (((a+b)<=c) || ((a+c)<=b) || ((b+c)<=a))
        
            printf("\tGiven sides cannot form a triangle.");
        
    else
    {
        printf("\tGiven three sides can form a triangle.");

        if ((a==b) && (a==c))
            printf("\n\tEquilateral Triangle.");
        else
        if ((a==b) || (a==c) || (b==c))
            printf("\n\tIsosceles Triangle.");
        else
            printf("\n\tScalene Triangle.");

        if((a*a==(b*b+c*c)) || (b*b==(a*a+c*c)) || (c*c==(a*a+b*b)))

            printf("\n\tRight Angle Triangle.");

        else
            if((a*a>(b*b+c*c)) || (b*b>(a*a+c*c)) || (c*c>(a*a+b*b)))

                printf("\n\tObtuse Angle Triangle.");

        else
            printf("\n\tAcute Angle Triangle.");
    }
    

    return 0;

}