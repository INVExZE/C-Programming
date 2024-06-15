//PROGRAM FOR FINDING THE AREA OF TRIANGLE WHEN 3 SIDES ARE GIVEN

#include <stdio.h>
#include <math.h>

int main()
{
    float a , b, c , s , area ;
    printf("Enter The Sides Of The Triangle A , B , C = ")  ;
    scanf("%f%f%f", &a, &b , &c );

    if ((a<=0) || (b<=0) || (c<=0))
    
        printf("Given sides cannot form a triangle");
    

    else 
        if (((a+b)<=c) || ((a+c)<=b) || ((b+c)<=a))
        
            printf("Given sides cannot form a triangle");
        

    else 
    {
        s = (a+b+c)/2;
        area = sqrt(s*(s-a)*(s-b)*(s-c));
        printf("Area of the triangle is = %f ", area);
    }

    return 0;

}