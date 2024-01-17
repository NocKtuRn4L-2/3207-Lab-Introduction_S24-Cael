/*
Dylan Cael - TUQ68706 - 1/17/2024
CIS-3207-003
Lab #0 Introduction to git & GitHub

Given driver for random.c
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "random.c"


int main()
{
	int a;

	/* seed the randomizer */
	srand( (unsigned)time(NULL) );

	printf("Today's random word: ");
	for(a=0;a<7;a++)
		putchar( randchar() );
	putchar('\n');

	return(0);
}

