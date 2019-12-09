#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*
3) histogram data

	The data provided contains a large number of random numbers. Your program should read the data and count the data within each of 16 'bins'.  
	That is the frequency of data lying between 0 - 16  ,  17 - 32,  33 - 48  etc. upto 255. The result should be outputted to a file containing 3 columns representing
	the bin start and end and the frequency.
	Finally the program should display the data as a bar graph like so:

	0-16	=======
	17-32	===========
	33-48	=============

	 ...

	etc

*/

int main() // Main Function
{

    char fname[128];
    int count=20;
    float x[count];
  
    FILE *input_file, *output_file;

    printf("Enter .dat file name: \n"); //Enter file name
    gets(fname);

	input_file = fopen(fname,"r"); //Opens/reads input file name

    if (input_file == NULL)     //Prints out error message
    {
         printf("\nError! opening file");
         exit(1);
    }

    output_file = fopen("output.dat","w"); //Opens output file 
	
	if (output_file == NULL)    //Prints out error message
    {
         printf("\nError! opening file");
         exit(1);
    }





	for (int i = 0; i <= 16; ++i)         //range of values between 0 and 16
	{   
	    printf("=\n");                    // output bar symbol
        fscanf(input_file, "%f",&x[i]);   //scans input file
		fprintf(output_file,"%f\n",x[i]); //prints output to output file
	}

	
	for (int i = 17; i < 32; ++i)         //range of values between 17 and 32
	{   
		printf("=\n");  
        fscanf(input_file, "%f",&x[i]);   //scans input file
		fprintf(output_file,"%f\n",x[i]); //prints output to output file
	}


	for (int i = 33; i < 48; ++i)         //range of values between 33 and 48
	{   
		printf("=\n");  
        fscanf(input_file, "%f",&x[i]);  //scans input file
		fprintf(output_file,"%f\n",x[i]); //prints output to output file
	}


	


	fclose(input_file);    //closes input file
 	fclose(output_file);   //closes output file
	printf("Data output successful!\n");
}




