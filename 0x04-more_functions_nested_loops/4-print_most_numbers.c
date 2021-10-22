#include <stdio.h>
#include "main.h"

/**
 * print_most_numbers - print most numbers function
 * Description: print most numbers in the function
 * Return: 0
 */

void print_most_numbers(void)
{
int i = 0;

while (i < 10)
{
if (i != 2 && i != 4)
{
_putchar(i + '0');
}
i++;
}
_putchar('\n');
}
