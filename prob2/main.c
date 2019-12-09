#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*
2) A program to calculate the roots of a quadratic equation. 

	This program reads in 3 numbers as the coefficients of a quadratic equation. The coefficients should be entered as command line arguments.
	It should print out the roots with appropreate text. It should be able to cope with complex as well as real roots. 
	Complex roots must be printed in the form x + iy or x - iy depending on the sign of the imaginary part.
*/


int main(int argc, char**argv)
{
	if (argc == 4)
	{

	/* Read in coefficients */

	printf("a = %s, b = %s, c = %s \n",argv[1],argv[2],argv[3]);
	char buffer[3];
	sprintf(buffer,"%s %s %s", argv[1],argv[2],argv[3]);

	float a = 0;
	float b = 0;
	float c = 0;

	sscanf(buffer, "%f %f %f",&a,&b,&c);
	printf("%s\n",buffer);

	/* Find roots */ 
	float root1 = 0;
	float root2 = 0;

	float complex = 0;
	//check 4ac- b^2
	float comp;
	comp = 4*a*c - b*b;
	if(comp < 0)
	{
		printf("complex roots\n");
		root1 = -b/(2*a);
		root2 = -b/(2*a);
		complex = sqrt(-comp)/(2*a);
	}
	else{
		printf("not complex roots\n");
		root1 = -b+sqrt(comp)/(2*a);
		root2 = -b-sqrt(comp)/(2*a);
		complex = 0;
	}

	/* Print out roots */
	printf("root 1: %d + %d i\n", root1,complex);
	printf("root 2: %d - %d i\n", root2,complex);

	}
	else
	{
		printf("wrong number arguments");
	}
}


