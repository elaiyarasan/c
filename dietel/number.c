#include <stdio.h>

int findQuotient( int, int );
int findRemainder( int, int );
void printDigitSeries( int );

int main()
{
	int number;

	printf("Integer? (up to 32767): ");
	scanf( "%d",&number);

	printDigitSeries( number );


	return 0;
}


int findQuotient( int number, int dividedBy )
{
	return number / dividedBy;
}

int findRemainder( int number, int dividedBy )
{
	return number % dividedBy;
}

// separates the digits using findQuotient and findRemainder
void printDigitSeries( int number )
{
	int divisor = 10000; // since our limit is a 5 digit integer
	int separated; // the sparated digit to print
	bool firstDigit = false; // whether we've hit our farthest left nonzero

	while ( divisor != 1 )
	{
		separated = findQuotient( number, divisor );

		if ( firstDigit == false && separated == 0 ) // no leading zeroes
		{
			// do nothing
		}
		else
		{
			firstDigit = true;
			printf("%d",separated);
		}

		number = findRemainder( number, divisor );
		divisor = divisor / 10;
 	}

	printf("%d",number);
}