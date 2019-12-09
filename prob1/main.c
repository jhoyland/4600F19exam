#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*
1) A program to produce the print out the binary representation of any integer. 

	The user should be able to enter an integer in decimal form. The program will then print the binary representation of the number.
	The binary representation should be in groups of 8-bits with a space between. E.g. 01001101 01100101*/


void main()
{
	int size;
	printf("how many numbers\n");
	scanf("%d", &size);

	int inputs[size];
	printf("enter inputs: \n");
	for (int i = 0; i < size; ++i)
	{
		scanf("%d\n", &inputs[i]);
	}
	

	int bytes[8];
	char outputs[256];
	for (int i = 0 ; i < size; i ++){
		bytes[0]= inputs[i]/128;
		if (bytes[0]>0)
		{
			bytes[0] = 1;
			inputs[i]- 127;
		}else bytes[0]=0;
		bytes[1]= inputs[i]/64;
		if (bytes[1]>0)
		{
			bytes[1] = 1;
			inputs[i]- 63;
		}else bytes[1]=0;
		bytes[2]= inputs[i]/32;
		if (bytes[2]>0)
		{
			bytes[2] = 1;
			inputs[i]- 31;
		}else bytes[2]=0;
		bytes[3]= inputs[i]/16;
		if (bytes[3]>0)
		{
			bytes[3] = 1;
			inputs[i]- 15;
		}else bytes[3]=0;
		bytes[4]= inputs[i]/8;
		if (bytes[4]>0)
		{
			bytes[4] = 1;
			inputs[i]- 7;
		}else bytes[4]=0;
		bytes[5]= inputs[i]/4;
		if (bytes[5]>0)
		{
			bytes[5] = 1;
			inputs[i]- 3;
		}else bytes[5]=0;
		bytes[6]= inputs[i]/2;
		if (bytes[6]>0)
		{
			bytes[6] = 1;
			inputs[i]- 1;
		}else bytes[6]=0;
		bytes[7]= inputs[i]/1;
		if (bytes[7]>0)
		{
			bytes[7] = 1;
		}
		else bytes[7]=0;
		for(int i = 0; i < 8; i ++){
			printf("%d",bytes[i]);
		}
		printf(" ");
	}
}


