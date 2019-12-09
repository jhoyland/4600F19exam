#include <stdio.h>
#include <stdlib.h>
#include <math.h>


/*
1) A program to produce the print out the binary representation of any integer. 

	The user should be able to enter an integer in decimal form. The program will then print the binary representation of the number.
	The binary representation should be in groups of 8-bits with a space between. E.g. 01001101 01100101*/


//try for as many bits as the number is
void main()
{
	int input;
	//prompt the user input
	printf("\nEnter an integer: ");
	fflush(stdout);
	//get the input
	scanf("%d",&input);
	//char output[sizeof(input)]; //holds as many places as the input is sized
	//printf("exponent is %i",sizeof(input)); //always returns 4?

	//find the largest exponent in 2 bits that this number holds
	//assume it is 16
	//printf("made it here 1");
	//fflush(stdout);
	int currentval = input;
	int exponent = 1; //special case for 2^0
	int output[15]; //just assuming highest entry is 16 bit number, fix later??

	if(input % 2 == 0) 
		{
		output[0] = 0; //if it's an even number the LSB is 0;
		}
	else output[0] = 1;
	while(exponent < 16)
	{	

		//printf("made it here 2");
		//fflush(stdout);
		//for the rest of the bits
		if ((input % (int)pow(2,exponent)) == 1) 
		{
		output[exponent] = 0; //if the remainder of the input divided by 2^exponent = 1, the index is 0
		}
		//example: 15 % 2^0
		else output[exponent] = 1;
		//printf("made it here 3");
		//fflush(stdout);
		exponent++;
	}
	for(int i = 15; i > 0; i--)
	{
		//printf("made it here 3");
		//fflush(stdout);
		printf("%d",output[i]);
		fflush(stdout);
	}
/*
	//example: 2 should print 00000010
	//3 should print 00000011
	while(exponent < sizeof(input)) //iterate this loop until it is the size of the input
	{
		int exponent = sizeof(input);
		index = 0;
		if(input % pow(2,exponent) == 0) //if the number divides evenly by the current power of 2, put 1 in the place of the index
		{
			output[index] = 1;
		}
		else output[index] = 0;
		exponent--; //decrement the exponent
	}
*/

	
}


