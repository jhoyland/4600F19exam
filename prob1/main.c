#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*
1) A program to produce the print out the binary representation of any integer. 

	The user should be able to enter an integer in decimal form. The program will then print the binary representation of the number.
	The binary representation should be in groups of 8-bits with a space between. E.g. 01001101 01100101*/


void main()
{
	int dec; /* The input value */ 

	printf("Enter number  ");
	
	/* Read in number, end if not a valid number */

	if(scanf("%d", &dec) != 1)
	{
		printf("\ninvalid entry\n");
		exit(1);
	}

	printf("\nBinary representation: ");

	/* Calculate the number of bits in an integer (generally 32) */

	int sz = sizeof(int) * 8;

	/* Step over bits in input value */

	for(int j = 1; j<=sz; j++)
	{

		/* check to see if each bit is set in the value by taking
		an and operation with a single bit.
		As we are printing MSB first we shift left by sz - j */

		if(dec & (1 << (sz-j)))
			printf("1");
		else
			printf("0");

		/* print a space every 8 characters */

		if(j%8 == 0) printf(" ");
	}


	printf("\n");
}


