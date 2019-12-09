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
	FILE* data; 		//this is my input file
	data = fopen("data.DAT","r");	// open in read mode
	float temp_x;
	float temp_y;
	int counter = 0; 


	if (data != NULL)	// check that the file opened correctly 
	{
		while(fscanf(data,"%f %f",&temp_x,&temp_y)!= EOF){
			counter++;			// count the number of data points
		}
		rewind(data);			// rewind file

		float array[counter];
		float bin[counter][16];

		for (int i = 0; i < counter; i++){
			fscanf(data,"%f",array[i]);			// fill 'array'


			// Okay I remembered switch statements from the the course on Java I took like 3 years ago so I hope this works
			switch((int)array[i]/16)			// use switch statement, divide into 16 cases
			{
				case 1: array[i] = bin[i][1];	// fill bins
						break;
				case 2: array[i] = bin[i][2];
						break;
				case 3: array[i] = bin[i][3];
						break;
				case 4: array[i] = bin[i][4];
						break;
				case 5: array[i] = bin[i][5];
						break;
				case 6: array[i] = bin[i][6];
						break;
				case 7: array[i] = bin[i][7];
						break;
				case 8: array[i] = bin[i][8];
						break;
				case 9: array[i] = bin[i][9];
						break;
				case 10: array[i] = bin[i][10];
						break;
				case 11: array[i] = bin[i][11];
						break;
				case 12: array[i] = bin[i][12];
						break;
				case 13: array[i] = bin[i][13];
						break;
				case 14: array[i] = bin[i][14];
						break;
				case 15: array[i] = bin[i][15];
						break;
				case 16: array[i] = bin[i][16];
						break;
				
			}

			FILE* output_file;
			output_file = fopen("output_data.DAT","w");	// open in write mode

			/* I'm having a hard time with this section. 
			I want to print (to the file) the length of the bin but I can't 
			figure out how. I can also use the same way to print out some sort 
			of ***** to make a bar graph but I ran out of time */
			
			int count;

			for (int j = 0; j < 15; j++)
			{		
				counter = 0;
				for (int k = 0; k < counter; k++)
				{
					printf("Bin %d\t",j);
					if (bin[j][k] != NULL)
					{
						fprintf(output_file,"%i\t%i\t%i\n",j*16,j*16 + 16,bin[j][k]);	
						count++;
						printf("*");
					}
				}
				printf("\n");
			}

		}

		fclose(output_file);
		fclose(data);
	}

	else printf("\nCould not find file");
}


