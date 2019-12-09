#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*
1) A program to produce the print out the binary representation of any integer. 

	The user should be able to enter an integer in decimal form. The program will then print the binary representation of the number.
	The binary representation should be in groups of 8-bits with a space between. E.g. 01001101 01100101*/


int DecimalToBinary(int n) 
{ 
     
    for (int i = 7; i >= 0; i--) //for 8 bit number
    { 
        int k = n >> i; 
        if (k & 1) 
            printf("1"); 
        else
            printf("0"); 
    } 
} 



void main()
{
int n = 20; //enter integer
if (n>255)
	printf("larger than 8 bit \n"); // outside 8bit range
    break;

DecimalToBinary(n);



}


