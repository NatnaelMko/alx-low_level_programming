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
for (int i = n; i <= 98; i++)
{
if (i < 10)
{
_putchar (i + '0');
_putchar (',');
_putchar (' ');
}
else
{
_putchar (i / 10 + '0');
_putchar (i % 10 + '0');
_putchar (',');
_putchar (' ');
}
}
