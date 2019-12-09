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
	/* Read in coefficients */
	float a,b,c;
	argv[3] = ("%f,%f,%f");
	sprintf(argv[3],"%f,%f,%f",a,b,c);
	float root1;
	float root2;
	float checkreal = b*b-4*a*c;
	if (checkreal>0)
	{
		root1 = -b+sqrt(checkreal)/2/a;
		root2 = -b-sqrt(checkreal)/2/a;
		printf("root1 = %f\nroot2 = %f\n",root1,root2);
	}
	if (checkreal < 0)
	{
		float imag = abs(b*b-4*a*c)/2/a;
		float real = -b/2/a;
		printf("root1 = %f +%fi\nroot2 = %f -%fi\n",real,imag,real,imag);
	}
	if(checkreal = 0)
	{
		float root = -b/2/a;
		printf("root is %f",root);
	}
	return 0;

}


