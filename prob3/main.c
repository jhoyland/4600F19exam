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




void main()
{

	FILE* read_file;
	read_file = fopen("data.dat","r");//given file name

	int count = 0; 
	int size = 0;


	if(read_file !=NULL){
		/*
		fseek(read_file, 0L, SEEK_END);
		
		//size = ftell(read_file);

		printf("%d\n",size);

		rewind(read_file);//go back
		*/

		size = 4096;//counted from looking

		float data[size];


		for (int i = 0; i < size; ++i)
		{
			fscanf(read_file, "%f \n", &data[i]);//scan into list
		}
		//sort into bins
		int min = 0;
		int max = 16;
		int limit = 0;
		int check = 0;

		for(int d = 0; d < 16; d++)
		{
			int counter = 0;
			for (int i = 0 ; i < size; i++)
			{
			
				if(data[i] < max && data[i]>= min)
				{
					counter++;
				}
			}

			printf("%d to %d: ",min,max);

			limit = counter/5;

			for (int i = 0; i < limit; ++i)
			{
				printf("=");
			}

			printf("\n");

			min +=16;
			max +=16;

			check += counter;
		}
		printf("%d\n",check);

	}
	else{
		printf("\n data not found");
	}

}


