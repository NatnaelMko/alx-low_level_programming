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
for (i = n; i <= 98; i++)
{
if (i < 10)
{
_putchar (i + '0');
}
else if (i == 98)
{
_putchar (i / 10 + '0');
_putchar (i % 10 + '0');
_putchar (' ');
}

else
{
_putchar (i / 10 + '0');
_putchar (i % 10 + '0');
}

if (i != 98)
{
_putchar (',');
_putchar (' ');
}
}

for (i = n; i >= 98; i--)
{
if (i > 98 && i < 100)
{
_putchar (i / 10 + '0');
_putchar (i % 10 + '0');
}
else if (i == 98)
{
_putchar (i / 10 + '0');
_putchar (i % 10 + '0');
_putchar (' ');
}
else
{
_putchar (i / 100 + '0');
_putchar (i / 10 % 10 + '0');
_putchar (i % 10 + '0');
}
if (i != 98)
{
_putchar (',');
_putchar (' ');
}

}
}
