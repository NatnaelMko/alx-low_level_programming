#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - entry point
 *
 * Descritpion: if els
 *
 * Return: 0
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if ( n > 0 ) {
		printf( "98 is positive\n" );
	} else if ( ( n = 0 ) ) {
		printf( "0 is zero\n" );
	} else {
		printf( "-98 is negative\n" );
	}
	return (0);
}
