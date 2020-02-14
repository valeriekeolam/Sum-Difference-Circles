#include <stdio.h>
#include <stdlib.h>

#define FIRST_NUMBER 8
#define SECOND_NUMBER 3

/*
 *Location: Temple University Computer Science
 *Programmer: Valerie Lam
 *Class: Introduction to C Programming 1057 Fall 2018 Section 005
 *Assignment: Number 1 - Calculate Sum and Difference.
 *Date: 09/04/2018
 *Version: 1
 *Description: Add two numbers together and print their sum.
 */

int main( )
{
	int sum;
	int difference;

	sum = FIRST_NUMBER + SECOND_NUMBER;
	printf ( "The sum and %d and %d is %d.\n", FIRST_NUMBER, SECOND_NUMBER, sum );

	difference = FIRST_NUMBER - SECOND_NUMBER;
	printf ( "The difference %d and %d is %d.\n", 
		FIRST_NUMBER, SECOND_NUMBER, difference );

	return EXIT_SUCCESS;
}
