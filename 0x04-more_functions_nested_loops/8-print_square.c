#include <stdio.h>
#include "main.h"

/**
 * print_square - function name
 * @size: name of the variable
 * Description: a function to print a new line
 * Return: 0
 */

void print_square(int size)
{
int i;

if (size < 1)
{
_putchar('\n');
}

for (i = 0; i < size; i++)
{
int j;

for (j = 0; j < size; j++)
{
_putchar('#');
}
_putchar('\n');
}
}
