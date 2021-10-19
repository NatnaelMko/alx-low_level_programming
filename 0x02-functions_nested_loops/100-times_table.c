#include "main.h"
#include <stdio.h>

/**
 * print_times_table - this is the function
 * 
 * @n: the first variable
 *
 * Description: This is the full description
 *
 * Return: 0;
 */


void print_times_table(int n)
{
int x, y, z;

if (n > 15)
return;

for (x = 0; x <= n; x++)
{
for (y = 0; y <= n; y++)
{
z = x * y;

if (z > 99)
{
_putchar(z / 100 + '0');
_putchar(z / 10 % 10 + '0');
_putchar(z % 10 + '0');
}
else if (z > 9 && z < 100)
{
_putchar(' ');
_putchar(z / 10 + '0');
_putchar(z % 10 + '0');
}
else
{
_putchar(' ');
_putchar(' ');
_putchar(z + '0');
}
if (y != n)
{
_putchar(',');
_putchar(' ');
}
}
_putchar('\n');
}
}
