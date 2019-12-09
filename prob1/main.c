#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*
1) A program to produce the print out the binary representation of any integer. 

	The user should be able to enter an integer in decimal form. The program will then print the binary representation of the number.
	The binary representation should be in groups of 8-bits with a space between. E.g. 01001101 01100101*/

void main(int argc, char const *argv[])
{
    int input;

    if( argc == 2 ){
        input = atoi(argv[1]);
    }
    else {
        printf("Invalid number of arguements! One and only one, input value, e.g: './a.out 23'.\n");
        return;
    }
    
    static char bin[33];
    for(int i = 0; i < 32; i++){
        int tmp = input & 0x80000000;
        //printf("%d\n", tmp);
        if (tmp == 0){
            bin[i]='0';
        }
        else {
            bin[i]='1';
        }

        input <<=1;
    }

    for (int x = 0; x < 4; x++){
        printf(" %c%c%c%c%c%c%c%c",
            bin[8*x],bin[8*x+1],bin[8*x+2],bin[8*x+3],bin[8*x+4],bin[8*x+5],
            bin[8*x+6],bin[8*x+7]);
    }
    return;
}
