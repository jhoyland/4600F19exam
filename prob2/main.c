#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*
2) A program to calculate the roots of a quadratic equation. 

	This program reads in 3 numbers as the coefficients of a quadratic equation. The coefficients should be entered as command line arguments.
	It should print out the roots with appropreate text. It should be able to cope with complex as well as real roots. 
	Complex roots must be printed in the form x + iy or x - iy depending on the sign of the imaginary part.
*/



int main()
{
	/* Read in coefficients */


			float a,b,c; //define the a,b,c values of the quadratic equation

			//take in value for the coeeficients of the quadratic equation manually by user
			//also check to see if value is a float or not below

	int e,f,g;
 		printf("Please enter a number for a\n");
 	do
 	{
 		fflush(stdin);
 	 	e=scanf("%f",&a);
 	 	if(e==0)
 	 		{
 	 			printf("wrong human! Please enter numbers only.\n");
 	 		}
 	 }
 	 while(e !=1);

 	 printf("Please enter a number for b\n");
 	 do
 	 {
 		f=scanf("%f",&b);
 	 	if(f==0)
 	 		{
 	 			printf("wrong human! Please enter numbers only.\n");
 	 		}
 	 }
 	 while(f !=1);

 	
 	printf("Please enter a number for c\n");
 	 do
 	 {
 	 	g=scanf("%f",&c);
 	 	if(g==0)
 	 		{
 	 			printf("wrong human! Please enter numbers only.\n");
 	 		}
 	 }

 	while(g !=1);

 	printf("%f %f %f\n",a,b,c); //confirm that computer reads the correct values entered


	


	/* Find roots */ 


	
 	float root1,root2,k,y;

 	k=pow(b,2)-(4*a*c); //this is the square root value of the quadratic equation to test for imaginary components

 	if(k>=0)  //if there are no imaginary components then it is simple
 	{
 		y=sqrt(k);

 		root1= (-b+y)/(2*a);
 		root2= (-b-y)/(2*a);
 			printf("The Roots are %f , %f",root1,root2);
	}
 	else //the imaginary roots are evaluated below and the imaginary component has an "i" 
 	{
 		y=sqrt(-k)/(2*a);

 		root1= ((-b)/(2*a)) ;
 		root2= ((-b)/(2*a)) ;
 			printf("The Roots are %f + %fi , %f - %fi ",root1,y,root2,y);
 	}
	



	








	/* Print out roots */

	
}



