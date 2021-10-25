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

int i, j;

for (i = 1; i <= size; i++)
{

for (j = size; j >= 1; j--)
{
if (j > i)
{
_putchar('.');
}
else
{
_putchar('#');
}

}
_putchar('\n');

}
}
