#include <stdio.h>
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
	char CH = 'A';

	for (ch = 'a'; ch <= 'z'; ch++)
	for (CH = 'A'; CH <= 'Z'; CH++)
	{
		putchar(ch);
		putchar(CH);
	}
		putchar('\n');	

	return (0);
}
