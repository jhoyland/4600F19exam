#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*
2) A program to calculate the roots of a quadratic equation. 

	This program reads in 3 numbers as the coefficients of a quadratic equation. The coefficients should be entered as command line arguments.
	It should print out the roots with appropreate text. It should be able to cope with complex as well as real roots. 
	Complex roots must be printed in the form x + iy or x - iy depending on the sign of the imaginary part.
*/


int main(int argc, char** argv)
{
	

	double a, b, c, root, real, imag, yupP, yupN, imagroot; //variables 
	printf("enter variables for a, b, and c: ");	
	scanf("%lf %lf %lf", &a, &b, &c);	//scans for inputs of abc and holds them

	real = b * b	;	//real part 
	imag = 4 * a * c;	//imaginary part 


	if (real > imag)			//if the root is real
	{	
        root = sqrt(real - imag) ;
        yupP = (-b+root)/(2*a);
        yupN = (-b-root)/(2*a);

        printf("positive = %.2lf\nnegative = %.2lf\n", yupP, yupN);
    }



    if (imag > real)			//imaginary 
    {
        imagroot = sqrt(-imag); 		//-imag due to not being able to do a (-number)^0.5
        
        printf("%.2lf - %.2lfi", real, root);
    }

    return 0;

}


