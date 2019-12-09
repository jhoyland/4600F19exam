#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*
1) A program to produce the print out the binary representation of any integer. 

	The user should be able to enter an integer in decimal form. The program will then print the binary representation of the number.
	The binary representation should be in groups of 8-bits with a space between. E.g. 01001101 01100101*/


void main()
{


// Binary Representation

	float integer; //define an input integer as a decimal

int correct; //if the value entered is correct decimal form
 		printf("Please enter a number\n");
 	

//check to see if integer is entered

 	do
 	{
 		
 	 	correct=scanf("%f",&integer);
 	 	if(correct==0) //checks if the value of integer entered is not empty
 	 		{
 	 			printf("wrong human! Please enter numbers only.\n");
 	 		}
 		fflush(stdin); //prevents value of old integer from being stored
 	}
 	while(correct!=1);  // do loop stops once integer entered 

 	printf("%f \n", &integer);

 	int binary[32]; // define binary list to printout length of 32 

 	

 	int n; 
 	int sum;


 	//trying to find the sum of 2 to the n power to be less than or equal to the input integer

 	do(n=31;n>=0;n--)
 	{

 		if(integer>= sum)
 		sum+= pow(2,n);

 	}
 	while(sum!=integer);






	
}


