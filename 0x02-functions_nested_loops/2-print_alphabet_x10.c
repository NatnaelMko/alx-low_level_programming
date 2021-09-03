#include "main.h"

/**
 * print_alphabet_x10: Print alphabet 10 times.
 *
 * Return: 0
 */

void print_alphabet_x10(void)
{
	char *c = "[a-z]";
	int i;

	for (i = 0; i <= 25; i++)
		{
			int j;

			for (j = 0; j < 10; j++)
				{
					_putchar(c[i]);
				}
			_putchar('\n');
		}
}
