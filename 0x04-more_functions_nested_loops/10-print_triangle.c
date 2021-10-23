#include <stdio.h>
#include "main.h"

/**
 * print_triangle - the name of a function
 * @size: a size variable
 * Description: a function to print a triangle
 * Return: 0
 */

void print_triangle(int size)
{

int c, i, j;
c = 0;

while (c < size)
{

i = size - 1 - c;
j = c + 1;

while (i > 0)
{
_putchar(' ');
i--;

}
while (j > 0)
{
_putchar('#');
j--;

}
_putchar('\n');
c++;
}

if (size < 1)
{
_putchar('\n');

}
}
