#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*
1) A program to produce the print out the binary representation of any integer. 

	The user should be able to enter an integer in decimal form. The program will then print the binary representation of the number.
	The binary representation should be in groups of 8-bits with a space between. E.g. 01001101 01100101*/


char main(int argc, char** argv )
{	
	printf("program start \n");
	fflush(stdout);
	int number; 
	int i,k,andmask;
	int n;

	if (argc > 1)
	{
		for(n=1;n<argc;n++){
		sscanf(argv[n],"%d",&number); // if there is a input, read in the first value of the input value
		printf( "the number of %d binary:",number); 
		for(i=8;i>=0;i--)
		{
        	andmask = 1 << i;
        	k = number & andmask;

       		k == 0 ? printf("0") : printf("1"); // check the number is overflow to determine print 1 or 0
   		}
   		printf("  ");
   	}

	}
	
	else
	{
		printf( "does not have a input");
	}


	return 0; 	
}

   

    

