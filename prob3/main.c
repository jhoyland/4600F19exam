#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define DATA_FORMAT "%i"

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
    int startBin[16], endBin[16], vals[16]={0};
    
    // Read in data from file
    FILE * input_file;
    input_file = fopen("data.dat","r");
    int i = 0;
    int data[5000];
    while(fscanf(input_file,DATA_FORMAT,&data[i]) != EOF){
        printf(DATA_FORMAT"\n",data[i]);
        i++;
    }
    fclose(input_file);

    // Create bins
    for (int j = 0; j < 16; ++j)
    {
        startBin[j]=16*j;
        endBin[j]=16*(j+1)-1;
    }

    // Sort values based on bins
    for (int k = 0; k <= i; ++k)
    {
        int binFit = (int) data[k]/16;
        ++vals[binFit];
    }

    // Save data and print 
    FILE * output_file;
    output_file = fopen("output_data.dat","w");
    for (int l = 0; l < 16; ++l)
    {
        int check = fprintf(output_file, "%i\t%i\t%i\n", startBin[l], endBin[l],vals[l]);
        if (check <= 0)
        {
            printf("Error writting data to file: output_data.dat\n");
            return;
        }

        // Plot histogram where each "=" represents 10 occurances
        printf("%i\t-\t%i\t%i\t",startBin[l], endBin[l],vals[l]);
        for (int m = 0; m < (int)(vals[l]/10); ++m)
        {
            printf("=");
        }
        printf("\n");
    }
    fclose(output_file);
}


