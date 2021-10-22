#include <stdio.h>
#include "main.h"

/**
 * print_line - function name
 * Description: a function to print a new line 
 * Return: 0
 */

void print_line(int n)
{
int i = 0;

while (i <= n)
{
if (i < 1)
{
_putchar('\n');
}
else
{
_putchar('_');
}
i++; 
}
}
