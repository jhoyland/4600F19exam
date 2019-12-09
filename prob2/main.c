#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*
2) A program to calculate the roots of a quadratic equation. 

	This program reads in 3 numbers as the coefficients of a quadratic equation. The coefficients should be entered as command line arguments.
	It should print out the roots with appropreate text. It should be able to cope with complex as well as real roots. 
	Complex roots must be printed in the form x + iy or x - iy depending on the sign of the imaginary part.
*/


int main(int argc, char** argv)
{
    double a, b, c, real, real2, imag;
	/* Read in coefficients */
    if( argc == 4 )
    {
        a = atof(argv[1]);
        b = atof(argv[2]);
        c = atof(argv[3]);
    }
    else 
    {
        printf("Invalid number of arguements! 3 input arguements needed: a,b,c where ax^2+bx+c=0.\n");
        return 1;
    }
	/* Find roots */
    if (pow(b,2)-4*a*c < 0)
    {
        real = -b/(2*a);
        real2 = real;
        imag = pow(-1*(pow(b,2)-4*a*c),0.5)/(2*a);
    }
    else if (pow(b,2)-4*a*c == 0)
    {
        real = -b/(2*a);
        real2 = real;
        imag = 0;
    }
    else
    {
        real = -b/(2*a)+pow((pow(b,2)-4*a*c),0.5)/(2*a);
        real2 = -b/(2*a)-pow((pow(b,2)-4*a*c),0.5)/(2*a);
        imag = 0;
    }

	/* Print out roots */
    printf("For roots are:\n\t%f + i%f\n\t%f - i%f\n",real,imag,real2,imag);
    return 0;
}


