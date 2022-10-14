#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 *main - this is where the program begin
 *void is the function
 *Return: a value of zero
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if( n > 0 ){
	/* if  condition is true then print the following */
	printf("Exact value of n is: %d\n", n ); printf( "is positive\n");
	} else if( n < 0 ){
	/* if else if condition is true */
	printf("Exact value of n is: %d\n", n ); printf( "is negative\n" );
	} else if( n == 0 ){
	/* if else if condition is true */
	printf("Exact value of n is: %d\n", n ); printf( "is zero\n" );
	}

	return (0);
}	
