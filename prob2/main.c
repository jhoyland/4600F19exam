#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*
2) A program to calculate the roots of a quadratic equation. 

	This program reads in 3 numbers as the coefficients of a quadratic equation. The coefficients should be entered as command line arguments.
	It should print out the roots with appropreate text. It should be able to cope with complex as well as real roots. 
	Complex roots must be printed in the form x + iy or x - iy depending on the sign of the imaginary part.
*/

int main()   // main function
{ 
	/* Read in coefficients */

    int a,b,c;
    double r;
    double r1,r2;
    int root1, root2;

	printf("Enter a: \n");   // Asks user to type in value for a
		scanf("%d", &a);              // Program scans user input
	printf("Enter b: \n");   // Asks user to type in value for b
		scanf("%d", &b);              // Program scans user input
	printf("Enter c: \n");   // Asks user to type in value for c
	    scanf("%d", &c);              // Program scans user input


	printf ("a = %d\n b = %d\n c = %d\n" , a,b,c);   // Ouput Binary number


	/* Find roots */ 

   r = (b^2) - (4*a*c);    // formula underneath square root 

  if (r < 0)  //complex roots
  { 
    r1 = -b/(double)(2*a); // real number calculation 
    r2 = sqrt(-r)/(2*a);   // imaginary number calculation 


  }
  else      //real roots
  { 
    root1 = (-b + sqrt(r))/(2*a);   // real roots calcution 1
    root2 = (-b - sqrt(r))/(2*a);   // real roots calcution 2

  }


	/* Print out roots */
//complex roots
    printf("First root = %.1f + i%.1f\n", r1, r2);  //Output first complex root
    printf("Second root = %.1f - i%.1f\n", r1, r2); //Output second complex root

//real roots
    printf("First real root = %.1f\n", root1);  //Output first real root
    printf("Second real root = %.1f\n", root2); //Output second real root

     return 0;
}


