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
	int a,b,c;
	printf("program start:\n");
	/* Read in coefficients */
	if(argc > 1)  // scan for input
	{
		sscanf(argv[1],"%d",&a);
		sscanf(argv[2],"%d",&b);
		sscanf(argv[3],"%d",&c);
	}
	/* Find roots */ 
	float s2 = 4*a*c;
	float s1 = pow(b,2);
	if (s1<s2) // complex case
	{
		float x = (-1*b)/(2*a);
		float y = sqrt((-1*(s1-s2)));

		printf("%f+i%f \n%f-i%f",x,y,x,y);
	}
	else // regular case
	{
		float roots1 = (-b + sqrt(s1 - s2)/(2*a));
		float roots2 = (-b - sqrt(s1-s2)/(2*a));
		printf("roots 1 = %f \nroots2 =%f",roots1,roots2);
	}

	



	/* Print out roots */
	
}


