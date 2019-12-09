#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*
2) A program to calculate the roots of a quadratic equation. 

	This program reads in 3 numbers as the coefficients of a quadratic equation. The coefficients should be entered as command line arguments.
	It should print out the roots with appropreate text. It should be able to cope with complex as well as real roots. 
	Complex roots must be printed in the form x + iy or x - iy depending on the sign of the imaginary part.
*/

float main() 
{
    double a, b, c, numerator, root1, root2, real, imaginary;
    printf("Enter Coefficients a, b and c: \n");
    fflush(stdout);
    
    /* Read in coefficients */
    scanf("%lf %lf %lf", &a, &b, &c);
    
    numerator = b * b - 4 * a * c;
    /* Find roots */ 
    /* Print out roots */
    if (numerator > 0) //real roots
    {
        root1 = (-b + sqrt(numerator)) / (2 * a);
        root2 = (-b - sqrt(numerator)) / (2 * a);
        printf("root1 = %.2lf and root2 = %.2lf", root1, root2);
    }
    
    else if (numerator == 0) //equal roots
    {
        root1 = root2 = -b / (2 * a);
        printf("root1 = root2 = %.2lf;", root1);
    }
    
    else //imaginary roots
    {
        real = -b / (2 * a);
        imaginary = sqrt(-numerator) / (2 * a);

        printf("root1 = %.2lf+%.2lfi and root2 = %.2f-%.2fi", real, imaginary, real, imaginary);
    }
    
} 