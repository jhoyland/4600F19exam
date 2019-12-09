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




void main(int argc,char **argv)
{
	int i=0,a,b,n,c;
	float x;
	int bin1,bin2,bin3,bin4,bin5,bin6,bin7,bin8,bin9,bin10,bin11,bin12,bin13,bin14,bin15,bin16;
	
	int bin_size = 16;
	int bits =8;
	int bin = pow(2,bits)/bin_size;
	int bins[bin+1];
	int count;

	FILE * input_file;

	input_file = fopen(argv[1],"r"); //open file

	if(input_file !=NULL) // CHECK IF IS OPEN
	{
	
		while(fscanf(input_file,"%f ",&x)!=EOF) // count how many data point is in the file
		{
			++i;
		}
		printf("number of data is %d\n",i); // print out the unmber of data point
		fflush(stdout);

		rewind(input_file);
		printf("file rewinded\n"); // rewinf the file to start over to begine task
		fflush(stdout);

		float num[i];

		for (a =0;a<i;a++)
		{
			fscanf(input_file,"%f",&num[a]); // put the number in the file in to a array
			//printf("%f \n",num[a]);
		}

		for(n=0;n<bin;n++)	
		{
			int small =(n*bin_size)+1;
			int big =(n+1)*bin_size;
			printf("%d->%d: ",small,big);

			for(b=0;b<i;b++)
			{
				if(num[b]>=small && num[b]<=big)  // count how many are there between small and big
				{
					++count;
				}
			}
			int bar = count;
			printf("%d ",count);
			for(c=0;c<bar;c+=10) // for every 10 number there is a bar
			{
				printf("-");
			}
			printf("\n"); // move to next line
			
			count=0; // reset the counter
		}
	}
	
		return ;
}


