#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*
1) A program to produce the print out the binary representation of any integer. 

	The user should be able to enter an integer in decimal form. The program will then print the binary representation of the number.
	The binary representation should be in groups of 8-bits with a space between. E.g. 01001101 01100101*/

int main(void) // main function
{
	int n;
	printf("Enter a number: \n");   // Asks user to type in number
	scanf("%d", &n);              // Program scans user input

	int Binary = sizeof(int) * 2; // Convert to 8 bits from user input
	int bits[Binary];             // Puts Binary in an array

	printf ("User input: %d, Binary converted:" , n);   // Ouput Binary number

	for (int i=Binary-1; i>=0; i--) // For loop to take bits and decrement through loop
	{
		bits[i] = n & 1;
		n >>= 1;
	}

	for (int i=0; i<Binary; i++)    // For loop to output Binary converted value in array
	{
		printf ("%d", bits[i]);
	}
}
