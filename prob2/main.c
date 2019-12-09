#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*
2) A program to calculate the roots of a quadratic equation. 

	This program reads in 3 numbers as the coefficients of a quadratic equation. The coefficients should be entered as command line arguments.
	It should print out the roots with appropreate text. It should be able to cope with complex as well as real roots. 
	Complex roots must be printed in the form x + iy or x - iy depending on the sign of the imaginary part.
*/


/* function to print out complex numbers - not required but makes life
easier */

void print_complex(double re, double im)
{
	printf("%f",re);
	if(im > 0)
	{
		printf(" + i %f",im);
	}
	if(im < 0)
	{
		im = fabs(im);		/* if imaginary is negative strip minus for printing*/
		printf(" - i %f",im);
	}
}


int main(int argc, char** argv)
{
	/* Read in coefficients */

	if(argc < 4)
	{
		printf("\nNot enough arguments. Must have 3 coefficients\n\n");
		exit(1);
	}

	double x1r,x2r;		//Real roots
	double x1i,x2i;		//Imaginary parts

	double a = atof(argv[1]);	// Square term
	double b = atof(argv[2]);	// Linear term
	double c = atof(argv[3]);	// Constant term

	/* Find discriminant */ 

	double discriminant = b*b - 4.0*a*c;

	/* Find the square root of the discriminant */

	double sqrt_term = fabs(discriminant) / (2.0 * a);

	/* set real parts to -b/2a, if discriminant is zero this will be 
	only solution. Set imaginary parts to zero*/

	x1r = x2r = -b / (2.0 * a);
	x1i = x2i = 0;

	if(discriminant > 0) /* real roots */
	{
		x1r += sqrt_term;
		x2r -= sqrt_term;
	}
	
	if(discriminant < 0) /* complex roots */
	{
		x1i += sqrt_term;
		x2i -= sqrt_term;
	}

	/* Print out equation and roots */

	printf("\n%0.4f x^2 + %0.4f x + %0.4f = 0",a,b,c);

	printf("\n\nRoots X1 = ");
	print_complex(x1r,x1i);
	printf("\t X2 = ");
	print_complex(x2r,x2i);
	printf("\n\n");

}


