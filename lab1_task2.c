#include <stdio.h>
#include <stdlib.h>

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

	int number_one;
	int number_two;
	int sum;
	int difference;
	int product;

	printf ( "Enter two integers, one value at a time.\n" );
	scanf ("%d%d", &number_one, &number_two);

	sum = number_one + number_two;
	printf ( "The sum and %d and %d is %d.\n", number_one, number_two, sum );

	difference = number_one + number_two;
	printf ( "\nThe difference %d and %d is %d.\n", number_one, number_two, difference );

	product = number_one * number_two;
	printf ( "\nThe product of %d and %d is %d.\n", number_one, number_two, product );

	return EXIT_SUCCESS;
}
