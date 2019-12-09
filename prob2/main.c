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
	if(argc < 4) //check if 3 coefficient are all entered
	{
		
	}
	float coe1 = atof(argv[1]); //coefficient for x^2
	float coe2 = atof(argv[2]); //coefficient for x
	float coe3 = atof(argv[3]); //coefficient for constant
	

	/* Find roots */ 
	float check=pow(coe2,2)-4*coe1*coe3; //check when roots are complex
	

	float root1 = (-coe2 + sqrt(check))/(2*coe1); //calculate root if they are not complex
	float root2 = (-coe2 - sqrt(check))/(2*coe1);


	/* Print out roots */
	if(check<0) //complex x+-iy
	{
		float firstnum = -coe2/(2*coe1);
		float secondnum = sqrt(-check)/(2*coe1);
		printf("Root1 = %f + i%f\nRoot2 = %f - i%f\n",firstnum,secondnum);
	}
	if(check>0) //not complex
	{
		printf("Root1= %f\nRoot2= %f\n",root1,root2);
	}
	
}


