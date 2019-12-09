#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*
2) A program to calculate the roots of a quadratic equation. 

	This program reads in 3 numbers as the coefficients of a quadratic equation. The coefficients should be entered as command line arguments.
	It should print out the roots with appropreate text. It should be able to cope with complex as well as real roots. 
	Complex roots must be printed in the form x + iy or x - iy depending on the sign of the imaginary part.
*/


int main(int argb, char** argc)
{
	/* Read in coefficients */
	int a, b, c; // the coefficients
	float root1, root2;
	printf("\nEnter the first coefficient");
	fflush(stdout);
	scanf("%d",&a);
	printf("\nEnter the second coefficient");
	fflush(stdout);
	scanf("%d",&b);
	printf("\nEnter the third coefficient");
	fflush(stdout);
	scanf("%d",&c);

	//quadratic equation -b +or- sqrt(b^2-4ac) /2a
	//account for complex numbers


	/* Find roots */
	float underroot = pow(b,2)-(4*a*c); //just the part under the square root
	float realnumber = (-1*b)/(2*a); //the first term before the square root
	float complexroot1;
	float complexroot2;
	float complexunderroot;
	if(underroot >= 0) //not complex, simple case
	{
		root1 = (realnumber + sqrt(underroot)/(2*a));
		root2 = (realnumber - sqrt(underroot)/(2*a));
	}
	if(underroot <= 0) //complex root
	{
		complexunderroot = -1* underroot; //make it positive so sqrt function works, just need to add an i to the other part
		complexroot1 = sqrt(complexunderroot)/(2*a);
		complexroot2 = sqrt(complexunderroot)/(2*a);
	}


	/* Print out roots */
	if(underroot >= 0) //real roots case
	{
	printf("\nRoot 1 is:%3f",root1);
	printf("\nRoot 2 is:%3f",root2);
	}
	if(underroot < 0)
	{
		printf("\nRoot 1 is: %3f + i%3f",realnumber,complexroot1);
		printf("\nRoot 2 is: %3f - i%3f",realnumber,complexroot2);
	}
}


