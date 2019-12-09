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

	FILE* numFile;
	FILE* outFile;
	int length = 4096;
	int y[length];
	int lValue;
	int hValue;
	int sum1,sum2,sum3,sum4,sum5,sum6,sum7,sum8,sum9,sum10,sum11,sum12,sum13,sum14,sum15, sum16 = 0;
	int x=0;


	numFile = fopen("data.dat","r");

	if(numFile == NULL)
	{
		fscanf(numFile,"%f %f",&x,&y);
		fclose(numFile);
		printf("You suck");
	}

	else if(numFile != NULL)
	{
		printf("File has been opened");

		for(int i = 0; i < length; i++)
		{
			fscanf(numFile, "%f" &y[i]);
			x = y[i];

			//if statements to check what the value is and group it into the appropriate category
			if(x<17)
			{
				sum1 = sum1 +1;
			}
			else if(x>16 && x<33)
			{
				sum2 = sum2+1;
			}
			else if(x>32 && x<49)
			{
				sum3 = sum3+1;
			}
			else if(x>48 && x<65)
			{
				sum4 = sum4+1;
			}
			else if(x>64 && x<81)
			{
				sum5 = sum5+1;
			}
			else if(x>80 && x<97)
			{
				sum6 = sum6+1;
			}
			else if(x>96 && x<113)
			{
				sum7 = sum7+1;
			}
			else if(x>112 && x<129)
			{
				sum8 = sum8+1;
			}
			else if(x>128 && x<145)
			{
				sum9 = sum9+1;
			}
			else if(x>144 && x<161)
			{
				sum10 = sum10+1;
			}
			else if(x>160 && x<177)
			{
				sum11 = sum11+1;
			}
			else if(x>176 && x<193)
			{
				sum12 = sum12 +1;
			}
			else if(x>192 && x<209)
			{
				sum13 = sum13+1;
			}
			else if(x>208 && x<225)
			{
				sum14=sum14+1;
			}
			else if(x>224 && x<241)
			{
				sum15=sum15+1;
			}
			else if(x>240 && x<256)
			{
				sum16 = sum16+1;
			}
			x++;
		}

		//write to an output file
		fprintf(outFile, "%i %i %i ", )

		//print out number of values and the bargraphs... not sure if this is how to do it but whatever
		printf("\n1st 16 %i", sum1);
		while(sum1>0)
		{
			printf("=");
			sum1 --;
		}
		printf("\n2nd 16 %i", sum2);
		while(sum2>0)
		{
			printf("=");
			sum2--;
		}
		printf("\n3rd 16 %i", sum3);
		while(sum3>0)
		{
			printf("=");
			sum3--;
		}
		printf("\n4th 16 %i", sum4);
		while(sum4>0)
		{
			printf("=");
			sum--;
		}
		printf("\n5th 16 %i", sum5);
		while(sum5>0)
		{
			printf("=");
				sum5--;
		}
		printf("\n6th 16 %i", sum6);
		while(sum6>0)
		{
			printf("=");
			sum6--;
		}
		printf("\n7th 16 %i", sum7);
		while(sum7>0)
		{
			printf("=");
			sum7--;
		}
		printf("\n8th 16 %i", sum8);
		while(sum8>0)
		{
			printf("=");
			sum8--;
		}

		printf("\n9th 16 %i", sum9);
		while(sum9>0)
		{
			printf("=");
			sum9--;
		}
		printf("\n10th 16 %i", sum10);
		while(sum10>0)
		{
			printf("=");
			sum10--;
		}
		printf("\n11th 16 %i", sum11);
		while(sum11>0)
		{
			printf("=");
			sum11--;
		}
		printf("\n12th 16 %i", sum12);
		while(sum12>0)
		{
			printf("=");
			sum12--;
		}
		printf("\n13th 16 %i", sum13);
		while(sum13>0)
		{
			printf("=");
			sum13--;
		}
		printf("\n14th 16 %i", sum14);
		while(sum14>0)
		{
			printf("=");
			sum14--;
		}
		printf("\n15th 16 %i", sum15);
		while(sum15>0)
		{
			printf("=");
			sum15--;
		}
		printf("\n16th 16 %i", sum16)
		while(sum16>0)
		{
			printf("=");
			sum16--;
		}



}