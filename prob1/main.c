#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*
1) A program to produce the print out the binary representation of any integer. 

	The user should be able to enter an integer in decimal form. The program will then print the binary representation of the number.
	The binary representation should be in groups of 8-bits with a space between. E.g. 01001101 01100101*/


void main()
{
	float input;
	printf("Enter\n");
	scanf("%f",&input);
	int int_input = (int)input;
	int int_binary = 0;
	if(int_input > 256)
	{
		int_binary = int_binary + 10000000;
	}
	if(int_input%256 >128)
	{
		int_binary =int_binary + 1000000;
	}
	if((int_input%256-128)>64)
	{
		int_binary = int_binary + 100000;
	}
	if((int_input%256-128-64)>32)
	{
		int_binary = int_binary + 10000;
	}
	if((int_input%256-128-64-32)>16)
	{
		int_binary = int_binary + 1000;
	}
	if((int_input%256-128-64-32-16)>8)
	{
		int_binary += 100;
	}
	if((int_input%256-128-64-32-16-8)>4)
	{
		int_binary +=10;
	}
	if((int_input%256-128-64-32-16-8-4)>2)
	{
		int_binary += 1;
	}
	printf("%f ",int_binary);

}


