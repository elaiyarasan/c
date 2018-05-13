/*
 Description: This program will ask the user to enter a size, and it
 will then print out a square, that is size X size. 
*/
#include <stdio.h>

void squarePrinter(int);

int main (void)
{
	int size;

	printf ("Please enter size of square: ");
	scanf ("%d", &size);

	/* Call function to print the square */
	squarePrinter(size);

	return 0;
}



void squarePrinter (int size)
{
	int i, j;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
			printf ("*");

		printf ("\n");
	}
}
