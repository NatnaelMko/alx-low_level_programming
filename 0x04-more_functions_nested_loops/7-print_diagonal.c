#include <stdio.h>
#include "main.h"

/**
 * print_diagonal - a function name
 * @n: input parameter
 * Description: print characheters diagonaly
 * Return: 0
 */

void print_diagonal(int n)
{
int i = 0;

if (n < 1)
{
putchar ('\n');
}

while (i < n)
{
int j = 0;

while (j < i)
{
putchar (' ');
j++;
}
putchar('\\');
putchar('\n');
i++;
}
}
