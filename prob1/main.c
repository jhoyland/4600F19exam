#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*
1) A program to produce the print out the binary representation of any integer. 

	The user should be able to enter an integer in decimal form. The program will then print the binary representation of the number.
	The binary representation should be in groups of 8-bits with a space between. E.g. 01001101 01100101*/


void main()
{
	float inputx;

	printf("Please enter a number in decimal form\n"); //ask user to enter a number
	fflush(stdout); //print out above printf immediately

	int corr = scanf(" %f",&inputx); //scan the input

	while(corr != 1) //check input correction
	{
		if(corr != 1)
		{
		printf("Wrong input, try again\n");
		fflush(stdin);
		corr = scanf(" %f",&inputx);
		}
	}
	
	printf("The input was %0.3f\n",inputx);


	for(int i=0;i<17;i++)
	{
		printf("%x\n",inputx);
	}

	/*unsigned i; 
    for (i = 1 << 31; i > 0; i = i / 2)
    {
    	if(inputx==1) printf("1");
    	if(inputx==0) printf("0");
    }*/

	/*unsigned char inputs = unsigned char inputx;
    unsigned char byte;
    int i, j;

    for (i=sizeof(inputx)-1;i>=0;i--)
    {
        for (j=7;j>=0;j--)
        {
            byte = (inputs[i] >> j) & 1;
            printf("%u", byte);
        }
    }*/

	


	
}


