#include <stdio.h>
#include "main.h"

/**
 * print_line - function name
 * @n: variable
 * Description: a function to print a new line 
 * Return: 0
 */

void print_line(int n)
{
int i = 0;

while (i < n)
{
if (n < 1)
{
_putchar('\n');
}
else
{
_putchar('_');
}
i++; 
}
_putchar('\n');
return;
}
