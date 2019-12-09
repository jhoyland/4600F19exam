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




void main(int argc, char** argv)
{

float a;
int count=0;

FILE *input_file;						//opens file
input_file = fopen(argv[1],"r");		



if(input_file != NULL)		//works if open
{
	while(fscanf(input_file,"%f",&a) != EOF)		//counts how much memory needed
	{
			count++;
	}
	double data[count];

	rewind(input_file);				
	for(int i=0;i<count;i++)
	{
		if(fscanf(input_file,"%lf",&data[i]) == EOF) //scans all the data in the data.dat 
		{
			break;
		}
	}
fclose(input_file);




}


