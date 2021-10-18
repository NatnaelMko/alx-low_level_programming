#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - Function
 *
 * @n: parameter 1
 * Description: Long one
 *
 * Return: 0
 */

void print_to_98(int n)
{
int i;

if (n > 98)
{
for (i = n; i >= 98; i--)
{
printf ("%d", i);

if (i != 98)
{
printf (", ");
}
}
}

else
{
for (i = n; i <= 98; i++)
{
printf ("%d", i);

if (i != 98)
{
printf (", ");
}
}
}
_putchar('\n');
}
