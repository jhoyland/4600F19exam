#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*
1) A program to produce the print out the binary representation of any integer. 
	The user should be able to enter an integer in decimal form. The program will then print the binary representation of the number.
	The binary representation should be in groups of 8-bits with a space between. E.g. 01001101 01100101
*/

void toBinary(float bin)
{

	int *bSize;//set size of binary number
	int x = 0;

	//four loop that finds remainder of number and divides by 2 for entire length of decimal number
	for(int i = 0; i <= 16; i++)
	{
		bin[x] = bSize % 2;
		bin = bin/2;
		printf("%i", bin);
	}

}

void main()
{

	float bNum = 0; 

	printf("Input number to return binary format: ");//code asks user to enter number

	scanf("%f", &bNum);//user inputs number

	printf("The number you entered is: %f", bNum);//code returns non-binary version of the number

	toBinary(bNum);//call to binary number function 
	return 0;
	
}