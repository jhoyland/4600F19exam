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


	//open a file and declare it a "r" to decalre reading only
	FILE* final_input;
	final_input =fopen("data.dat","r");


	
	// this it to check if the fill is opened or not

	if(final_input == NULL) 
 	{
 		printf("File didn't open");
 		
 	}


 	float data[100];
 	int length_data= sizeof(data)/sizeof(data[0]);
 	

 	int n=0;
 	
 	//
 	do
 		for(n=0;n<length_data;n++)
 		{
 			fscanf(final_input,"\n%f ",&data[n]);
  		}
 	while(data!=NULL);


 	int bin1[],bin2[],bin3[]; //define the bins 


 	for(n=0;n<length_data;n++)
 	{
 			
 			if(data[n]>=0 & data[n] <17)
 			{
 				data[n]=bin1;
 			}
 			else
 			{
 				
 			}

 	}


 	



}


