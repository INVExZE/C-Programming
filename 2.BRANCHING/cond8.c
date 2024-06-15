// Program for finding the roots of quadratic equation.

#include <stdio.h>
#include <math.h>

int main()
{
    float a, b, c, d, root1, root2;
    printf("\n Enter Three Numbers A , B , C =  ");
    scanf("%f%f%f", &a, &b, &c);

    if ( a==0 )
    {
        printf("\n\t\tThis is not a quadratic equation.");
        root1 = -c/b ;
        printf("\n\t\tThis is a linear equation = %0.fx + %0.f ", b , c);
        printf("\n\t\tThe root of the Linear Equation is = %f\n\n", root1);
    }

    
    else 
    {
        printf("\n\tSo The Quadratic Equation is = %0.fx^2 + %0.fx + %0.f ", a , b , c );
        d = b * b - 4 * a * c;
    

     if (d == 0)
    {
        printf("\n\t\tRoots Are Equal ");
        root1 = root2 = -b / (2 * a);
        printf("\n\t\troot1=%.3f \n\t\troot2=%.3f\n\n", root1, root2);
    }

    else if (d > 0)
    {
        printf("\n\t\tRoot Are Equal And Distinct \n");
        root1 = (-b + sqrt(d)) / (2 * a);
        root2 = (-b - sqrt(d)) / (2 * a);
        printf("\n\t\troot1=%.3f \n\t\troot2=%.3f", root1, root2);
    }

    else
    {
        printf("\n\n\t\tRoots Are Imaginary");
        root1 = -b / (2 * a);
        root2 = sqrt(-d) / (2 * a);
        printf("\n\t\tReal Part = %.3f \n\t\tImaginary Part = %.3f", root1, root2);
    }
    }

    return 0;
}