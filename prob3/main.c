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

void histogram(int bin) //graphing function
{
	float j=0;
	j = bin/10;
	printf("bin 1");
	for(int i =0;i<j;i++)
	{
		printf("=");
	}
	printf("\n");
}


void main(int argc, char** argv)
{

FILE* inputfile;
inputfile =fopen(argv[1],"r"); //open data file
int count = 0;
float x;

if (inputfile != NULL)
	{
	
	while(fscanf(inputfile, "%f", &x) !=EOF) //number of data point 
		{
			++count;
		}	
	}
//printf("count = %d\n",count);

rewind(inputfile);
fflush(stdout);
float j[count];
int bin1 = 0, bin2=0, bin3=0, bin4=0, bin5=0, bin6=0, bin7=0 ,bin8=0 ,bin9=0 ,bin10=0 ,bin11=0 ,bin12=0 ,bin13=0 ,bin14=0 ,bin15=0 ,bin16=0;

for (int a = 0; a <count; a++) // sort into bins
	{
		fscanf(inputfile, "%f", &j[a]);
		int number = j[a];
		if(0<number && number<16)
			bin1++;
		if(17<number && number<32)
			bin2++;
		if(33<number && number<48)
			bin3++;
		if(49<number && number<64)
			bin4++;
		if(65<number && number<80)
			bin5++;
		if(81<number && number<96)
			bin6++;
		if(97<number && number<112)
			bin7++;
		if(113<number && number<128)
			bin8++;
		if(129<number && number<144)
			bin9++;
		if(145<number && number<160)
			bin10++;
		if(161<number && number<176)
			bin11++;
		if(177<number && number<192)
			bin12++;
		if(193<number && number<208)
			bin13++;
		if(209<number && number<224)
			bin14++;
		if(225<number && number<240)
			bin15++;
		if(241<number && number<256)
			bin16++;
	}


printf("bin 1 = %d\nbin 2= %d\nbin 3 = %d\nbin 4 = %d\nbin 5 = %d\nbin 6 = %d\nbin 7 = %d\nbin 8 = %d\n",bin1,bin2,bin3,bin4,bin5,bin6,bin7,bin8); //print out amount of data
printf("bin 9 = %d\nbin 10 = %d\nbin 11 = %d\nbin 12 = %d\nbin 13 = %d\nbin 14 = %d\nbin 15 = %d\nbin 16 = %d\n",bin9,bin10,bin11,bin12,bin13,bin14,bin15,bin16);		
printf("every = is 10 data points in that bin\n");

/*
for(int b =1;b=<16;b++)
{
	histogram(binb);
}
*/

histogram(bin1);
histogram(bin2);
histogram(bin3);
histogram(bin4);
histogram(bin5);
histogram(bin6);
histogram(bin7);
histogram(bin8);
histogram(bin9);
histogram(bin10);
histogram(bin11);
histogram(bin12);
histogram(bin13);
histogram(bin14);
histogram(bin15);
histogram(bin16);

}


