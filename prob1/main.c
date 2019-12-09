#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*
1) A program to produce the print out the binary representation of any integer. 

	The user should be able to enter an integer in decimal form. The program will then print the binary representation of the number.
	The binary representation should be in groups of 8-bits with a space between. E.g. 01001101 01100101*/

/* This function converts the integer to binary or sends it to the
 * error handling function 
 */
void int_to_bin(int integer)
{
	for (int i = 15; i >= 0; i--)	// 16 bit value, 
	{
		int bin = integer >> i;		// right shift value by i

		if (bin & 1)				// if both numbers equal '1' print 1
			printf("1");
		else						// else print 0
			printf("0");
	}
}


/* This function handles errors */
int error()
{
	printf("Try again.\nEnter a valid number.\n");
}

int main()
{
	int integer;
	char string;

	printf("Please enter a number: \n");
	scanf("%d%c", &integer,&string);

	// Check if it was actually an integer entered
	// If it wasn't, take to error handling
	if (integer != (int)integer || string != '\n')	
	{
		error();
		return 0;
	}
	else	// otherwise if it worked...
	{
		printf("%d in binary is:\n",integer);

		int_to_bin(integer);	// converting function
	}

	return 0;
}
