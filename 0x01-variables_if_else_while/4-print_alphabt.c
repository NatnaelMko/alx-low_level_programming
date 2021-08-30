include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - entry point
 *
 * Descritpion: Alphabets 2
 *
 * Return: 0
 */

int main(void)
{
	char ch = 'a';

	for (ch = 'a'; ch <= 'z' && ch != 'e' && ch != 'q'; ch++)
	{
		putchar(ch);
	}
		putchar('\n');

	return (0);
}
