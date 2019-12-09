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
	FILE* dataFile;
	FILE* outputFile;
	int numofbins = 16; //total number of bins to sort the data into
	int binsize = (int)(numofbins/256);
	//make my bins which will hold min value, maximum value, and occurances of data
	int bin[15];
	for (int j = 0; j < 15; j++)
	{
		bin[j] = 0; //initialize all counts as 0
	}
	//int bincount1 = 0, bincount2 = 0, bincount3 = 0, bincount4 = 0, bincount5 = 0, bincount6 = 0, bincount7 = 0, bincount8 = 0, bincount9 = 0,
	//bincount10 = 0, bincount11 = 0, bincount12 = 0, bincount13 = 0, bincount14 = 0, bincount15 = 0, bincount16 = 0;

	int currentvalue;
	int counter = 0;
	dataFile = fopen("data.DAT","r"); //open the file in read mode
	if(dataFile != NULL)
	{
		//printf("\nMade it here");
		//fflush(stdout);
		while(fscanf(dataFile,"%d",&currentvalue)!= EOF){
			counter++; //find out how many data points there are. Do I need this?
		}
		rewind(dataFile); //set it back to the beginning
		//printf("\nMade it here");
		//fflush(stdout);
		//is this really gonna be this annoying???
		//please never tell anyone I did this

		//now I have the count of all the times a number falls in the value
		while(fscanf(dataFile,"%d",&currentvalue) != EOF)
		{
			if(currentvalue >= 0 && currentvalue <16)
				bin[0]++;
			if(currentvalue >= 16 && currentvalue <32)
				bin[1]++;
			if(currentvalue >= 32 && currentvalue <48)
				bin[2]++;
			if(currentvalue >= 48 && currentvalue <64)
				bin[3]++;
			if(currentvalue >= 64 && currentvalue <80)
				bin[4]++;
			if(currentvalue >= 80 && currentvalue <96)
				bin[5]++;
			if(currentvalue >= 96 && currentvalue <112)
				bin[6]++;
			if(currentvalue >= 112 && currentvalue <128)
				bin[7]++;
			if(currentvalue >= 128 && currentvalue <144)
				bin[8]++;
			if(currentvalue >= 144 && currentvalue <160)
				bin[9]++;
			if(currentvalue >= 160 && currentvalue <176)
				bin[10]++;
			if(currentvalue >= 176 && currentvalue <192)
				bin[11]++;
			if(currentvalue >= 192 && currentvalue <208)
				bin[12]++;
			if(currentvalue >= 208 && currentvalue <224)
				bin[13]++;
			if(currentvalue >= 224 && currentvalue <240)
				bin[14]++;
			if(currentvalue >= 240 && currentvalue <256)
				bin[15]++;
		}
		//printf("\nMade it here");
		//fflush(stdout);
		
		outputFile = fopen("output","w"); //write the data to an output file
		if(outputFile != NULL)
		{	
			//printf("\nMade it here");
			//fflush(stdout);
			int currentmin = 0;
			int currentmax = 0;
			//char currentelement[20]; //holds the line that I will print to the file
			for (int i = 0; i <= 15; i++){
				//printf("\nMade it here");
				//fflush(stdout);
				currentmin = currentmax+1; //change the bucket size that is printed to the previous maximum range +1 (previous was 0-15, next is 16-32)
				currentmax = currentmax+16;
				//sprintf(currentelement,"bincount%d",i); //allows me to shorten writing out the bin element numbers
				fprintf(outputFile,"\n%d - %d: %d",currentmin,currentmax, bin[i]); //this gives segmentation fault.
				//printf("\nMade it here");
				//fflush(stdout);
				printf("\n%d - %d: %d ",currentmin,currentmax, bin[i]);
				for(int k = 0; k < (bin[i] / 20); k++) printf("="); //print an = sign for every 20 that occurs
				//now to add the equals signs
				//printf("\nMade it here");
				fflush(stdout);

			}
			
		}

	}





}


