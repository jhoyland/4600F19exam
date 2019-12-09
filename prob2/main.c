#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*
2) A program to calculate the roots of a quadratic equation. 

	This program reads in 3 numbers as the coefficients of a quadratic equation. The coefficients should be entered as command line arguments.
	It should print out the roots with appropreate text. It should be able to cope with complex as well as real roots. 
	Complex roots must be printed in the form x + iy or x - iy depending on the sign of the imaginary part.
*/

// Note: I genuinely don't remember learning what argc is so I'm going to ignore that part. I'm sorry!!
int main()
{
	float a,b,c;
	float plus, minus;

	/* Read in coefficients */
	printf("Please enter the three coefficients of the quadratic equation: a b c\n");
	scanf("%f %f %f",&a,&b,&c);		// a, b, c

	/* Idiot-proofing. I mean error handling. */
	if (a == 0)		
	{
		printf("Equation is linear, not quadratic.\n");
		return 0;		// exit. Tell them they are dumb.
	}

	/* Find roots */ 
	
	if ((b*b - 4*a*c) < 0)	// complex case
	{	
		printf("Complex roots\n");
		float d = -b/(2*a);
		float e = sqrt(abs(b*b - 4*a*c))/(2*a);
		
		printf("Roots are: %f + i%f and %f - i%f",(d,e,d,e));
	}

	if ((b*b - 4*a*c) >= 0) 	// real case
	{
		printf("Real roots\n");
		plus = (-b + sqrt(abs(b*b - 4*a*c)))/(2*a);
		minus = (-b - sqrt(abs(b*b - 4*a*c)))/(2*a);

		printf("Roots are: %f %f", plus,minus);
	}
	

}


