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


void print_histogram(int * data, int n, int binsize, int scale)
{
	int bin_top = binsize - 1;
	int bin_start = 0;
	int i,j;
	if(scale < 1) scale = 1;

	printf("\nFrequency histogram:");
	printf("\nScale: 1 bar = %d count\n",scale);

	for(i = 0; i<n; i++)
	{
		printf("\n%3d -> %3d \t|",bin_start,bin_top);
		for(j = 0; j<data[i];j+=scale) printf("=");

		bin_start += binsize;
		bin_top = bin_start + binsize - 1;

	}

	printf("\n\n\n");
}


void output_histogram(FILE * od, int* data, int n, int binsize)
{
	int bin_top = binsize - 1;
	int bin_start = 0;
	int i;

	for(i = 0; i<n; i++)
	{
		fprintf(od,"\n%3d \t %3d \t %3d",bin_start,bin_top,data[i]);

		bin_start += binsize;
		bin_top = bin_start + binsize - 1;

	}

	printf("\n\n\n");
}


void main()
{
	FILE * dat;

	dat = fopen("data.dat","r");

	if(dat == NULL)
	{
		printf("\nCould not open file!\n");
		exit(1);
	}

	int bin[16];

	int datum;
	int i;
	int bin_top;

	int max = 0;

	for(i=0;i<16;i++) bin[i] = 0;

	while(fscanf(dat, "%d",&datum) != EOF)
	{
		bin_top = 0;
		i = -1;

		/* Loop until the read datum is less than the next bin start */

		do
		{
			i++;
			bin_top+=16;
		}
		while(datum >= bin_top && i < 16);

		/* Increment the bin count */

		bin[i] ++; 
		if(bin[i]>max) max=bin[i];
	}

	fclose(dat);

	int scale = max / 40 + 1;

	print_histogram(bin,16,16,scale);

	FILE* hist;
	hist = fopen("histogram.dat","w");

	output_histogram(hist,bin,16,16);

	fclose(hist);
}


