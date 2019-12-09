#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*
1) A program to produce the print out the binary representation of any integer. 

	The user should be able to enter an integer in decimal form. The program will then print the binary representation of the number.
	The binary representation should be in groups of 8-bits with a space between. E.g. 01001101 01100101*/



int main()
{  
	int a[100];		//array to store the input 
	int n;
	int i;    //variables 


	printf("enter a number:   ");    
	scanf("%d",&n); 		//scans the input and saves it as n 

	for(i=0;n>0;i++)    
		{    
			a[i]=n%2;    //converts integer form base 10 to base 2 
			n=n/2;    
		}  

	for(i=i-1;i>=0;i--)    
		{    
			printf("%d",a[i]);    
		}    

return 0;  
}  