#include <stdio.h>
#include "main.h"

/**
 * more_numbers- print numbers 10 times
 * Description: a function to print numbers from 0 - 14 ten times
 * Return: 0
 */

void more_numbers(void)
{
int i;
int j;
for (i = 0; i <= 10; i++)
{
for (j = 0; j < 15; j++)
{
if (j > 9)
{
_putchar(j / 10 + '0');
_putchar(j % 10 + '0');
}
else
{
printf("%d", j);
}
}
printf("\n");
}
_putchar('\n');
}
