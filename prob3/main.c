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
	int bin1 = 0; //0-16
	int bin2 = 0; //17-32
	int bin3 = 0; //33-48
	int bin4 = 0; //49-64
	int bin5 = 0; //65-80
	int bin6 = 0; //81-96
	int bin7 = 0; //96-112
	int bin8 = 0; //114-128
	int bin9 = 0; //129-144
	int bin10= 0; //145-160
	int bin11= 0; //161-176
	int bin12= 0; //177-192
	int bin13= 0; //193-208
	int bin14= 0; //209-224
	int bin15= 0; //225-240
	int bin16= 0; //241-255
	int i = 0;
	float b;
	int counter = 0;
	FILE* input_file;
	input_file =fopen("data.dat","r");
	while(fscanf(input_file,"%f\n",&b) != EOF)
	{
	 counter++;
	}
	rewind(input_file);
	//count the size of data

	float data[counter];
	i = 0;
	for (i = 0;i<counter;i++)
	{
		fscanf(input_file,"%f\n",&data[i]);//copy data to an array
		if(data[i]<17)//count the f
		{
			bin1++;
			//printf("%d\n",bin1);
			if(16<data[i]<33)
			{
				bin2++;
				if(32<data[i]<49)
				{
					bin3++;
					if(48<data[i]<65)
					{
						bin4++;
						if(64<data[i]<81)
						{
							bin5++;
							if(80<data[i]<97)
							{
								bin6++;
								if(96<data[i]<113)
								{
									bin7++;
									if(112<data[i]<129)
									{
										bin8++;
										if(128<data[i]<145)
										{
											bin9++;
											if(144<data[i]<161)
											{
												bin10++;
												if(160<data[i]<177)
												{
													bin11++;
													if(176<data[i]<193)
													{
														bin12++;
														if(192<data[i]<209)
														{
															bin13++;
															if(208<data[i]<225)
															{
																bin14++;
																if(224<data[i]<241)
																{
																	bin15++;
																	if(240<data[i]<256)
																	{
																		bin16++;
																	}
																	else{bin16=bin16;}
																}
																else{bin15=bin15;}
															}
															else{bin14=bin14;}
														}
														else{bin13=bin13;}
													}
													else{bin12=bin12;}

												}
												else{bin11=bin11;}

											}
											else{bin10=bin10;}
										}
										else{bin9=bin9;}
									}
									else{bin8=bin8;}
								}
								else{bin7=bin7;}
							}
							else{bin6=bin6;}
						}
						else{bin5=bin5;}
					}
					else{bin4=bin4;}
				}
				else
				{bin3=bin3;}
			}
			else
			{bin2=bin2;}
		}
		else
		{bin1 = bin1;}
	}
	fclose(input_file);
	FILE* output_file;
	output_file = fopen("histogram.txt","w");
	i = 0;
	fprintf(output_file,"0-16 %d\n",bin1);

}


