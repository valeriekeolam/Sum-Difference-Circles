#include <stdio.h>
#include <stdlib.h>

#define PI_VALUE 3.14159265


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

//Declare three floating-point values to hold our calculations.

	double radius;
	double circumference;
	double area; 

//Input the required data to perform the calculation.
	
	printf ("Enter the radius: "); //Message prompts the user to enter the radius value.
	scanf ("%l", &radius);

//Compute the area and circumference. 
	area = PI_VALUE * radius * radius; 
	circumference = 2.0 * radius * PI_VALUE; 

//Output the results.
	printf ("The circle radius is\t %lf.\n", radius);
	printf ("The calculated area is \t %lf.\n", area);
	printf ("The circumference is \t %lf. \n", circumference); 

	return EXIT_SUCCESS;
}
