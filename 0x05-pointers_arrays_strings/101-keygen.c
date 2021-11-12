#include <stdio.h>
#include "main.h"

/**
 * main - a random password generator
 * Description: find from the above
 * Return: 0
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	int myrand;
	int count;
	int total;

	srand(time(NULL));
	for (count = 0, total = 2772; total > 122; count++)
	{
		myrand = (rand() % 125) + 1;
		printf("%c", myrand);
		total -= myrand;
	}
	printf("%c", total);

	return (0);
}
