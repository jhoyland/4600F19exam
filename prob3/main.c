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
	float x;
	int count=0;
	FILE *input_file;

	/*Scan data*/
	input_file = fopen("data.dat","r");

	if(input_file != NULL)
	{
		while(fscanf(input_file,"%f",&x) != EOF)
		{
			count++; //numbers of data
		}
		double data[count];

		rewind(input_file);
		for(int i=0;i<count;i++)
		{
			if(fscanf(input_file,"%lf",&data[i]) == EOF) //EOF is end of the file
			{
				break;
			}
			
		}
		fclose(input_file);

		/*Count data*/
		int count1=0; //counter for num in 0-15 bin
		int count2=0; //counter for num in 16-31 bin
		int count3=0; //counter for num in 32-47 bin
		int count4=0; //counter for num in 48-63 bin
		int count5=0; //counter for num in 64-79 bin
		int count6=0; //counter for num in 80-95 bin
		int count7=0; //counter for num in 96-111 bin
		int count8=0; //counter for num in 112-127 bin
		int count9=0; //counter for num in 128-143 bin
		int count10=0; //counter for num in 144-159 bin
		int count11=0; //counter for num in 160-175 bin
		int count12=0; //counter for num in 176-191 bin
		int count13=0; //counter for num in 192-207 bin
		int count14=0; //counter for num in 208-223 bin
		int count15=0; //counter for num in 224-239 bin
		int count16=0; //counter for num in 240-255 bin

		for(int i=0;i<count;i++)
		{
			if(data[i]<16) count1++; //num in 0-15 bin
			if(data[i]>15 && data[i]<32) count2++; //num in 16-31 bin
			if(data[i]>31 && data[i]<48) count3++; //num in 32-47 bin
			if(data[i]>47 && data[i]<64) count4++; //num in 48-63 bin
			if(data[i]>63 && data[i]<80) count5++; //num in 64-79 bin
			if(data[i]>79 && data[i]<96) count6++; //num in 80-95 bin
			if(data[i]>95 && data[i]<112) count7++; //num in 96-111 bin
			if(data[i]>111 && data[i]<128) count8++; //num in 112-127 bin
			if(data[i]>127 && data[i]<144) count9++; //num in 128-143 bin
			if(data[i]>143 && data[i]<160) count10++; //num in 144-159 bin
			if(data[i]>159 && data[i]<176) count11++; //num in 160-175 bin
			if(data[i]>175 && data[i]<192) count12++; //num in 176-191 bin
			if(data[i]>191 && data[i]<208) count13++; //num in 192-207 bin
			if(data[i]>207 && data[i]<224) count14++; //num in 208-223 bin
			if(data[i]>223 && data[i]<240) count15++; //num in 224-239 bin
			if(data[i]>239 && data[i]<256) count16++; //num in 240-255 bin
		}
		input_file = fopen("output.dat", "w"); //open output.dat in write mode

		if(input_file != NULL) //check if file is open
		{
			/*Output every bin*/
			fprintf(input_file,"0 15 %u\n",count1);
			fprintf(input_file,"16 31 %u\n",count2);
			fprintf(input_file,"32 47 %u\n",count3);
			fprintf(input_file,"48 63 %u\n",count4);
			fprintf(input_file,"64 79 %u\n",count5);
			fprintf(input_file,"80 95 %u\n",count6);
			fprintf(input_file,"96 111 %u\n",count7);
			fprintf(input_file,"112 127 %u\n",count8);
			fprintf(input_file,"128 143 %u\n",count9);
			fprintf(input_file,"144 159 %u\n",count10);
			fprintf(input_file,"160 175 %u\n",count11);
			fprintf(input_file,"176 191 %u\n",count12);
			fprintf(input_file,"192 207 %u\n",count13);
			fprintf(input_file,"208 223 %u\n",count14);
			fprintf(input_file,"224 239 %u\n",count15);
			fprintf(input_file,"240 255 %u\n",count16);
		}
		fclose(input_file); //close input_file

		/*Display bar graph, 10 per unit*/
		printf("0-15     ");
		for(int i=0;i<(count1/10);i++) printf("=");fflush(stdin);
		printf(" \n");

		printf("16-31    ");
		for(int i=0;i<(count2/10);i++) printf("=");fflush(stdin);
		printf("\n");

		printf("32-47    ");
		for(int i=0;i<(count3/10);i++) printf("=");fflush(stdin);
		printf("\n");

		printf("48-63    ");
		for(int i=0;i<(count4/10);i++) printf("=");fflush(stdin);
		printf("\n");

		printf("64-79    ");
		for(int i=0;i<(count5/10);i++) printf("=");fflush(stdin);
		printf("\n");

		printf("80-95    ");
		for(int i=0;i<(count6/10);i++) printf("=");fflush(stdin);
		printf("\n");

		printf("96-111   ");
		for(int i=0;i<(count7/10);i++) printf("=");fflush(stdin);
		printf("\n");

		printf("112-127  ");
		for(int i=0;i<(count8/10);i++) printf("=");fflush(stdin);
		printf("\n");

		printf("128-143  ");
		for(int i=0;i<(count9/10);i++) printf("=");fflush(stdin);
		printf("\n");

		printf("144-159  ");
		for(int i=0;i<(count10/10);i++) printf("=");fflush(stdin);
		printf("\n");

		printf("160-175  ");
		for(int i=0;i<(count11/10);i++) printf("=");fflush(stdin);
		printf("\n");

		printf("176-191  ");
		for(int i=0;i<(count12/10);i++) printf("=");fflush(stdin);
		printf("\n");

		printf("192-207  ");
		for(int i=0;i<(count13/10);i++) printf("=");fflush(stdin);
		printf("\n");

		printf("208-223  ");
		for(int i=0;i<(count14/10);i++) printf("=");fflush(stdin);
		printf("\n");

		printf("224-239  ");
		for(int i=0;i<(count15/10);i++) printf("=");fflush(stdin);
		printf("\n");

		printf("240-255  ");
		for(int i=0;i<(count16/10);i++) printf("=");fflush(stdin);
		printf("\n");
	}
	else
	{
		printf("Couldn't open the target file");
		return;
	}



}


