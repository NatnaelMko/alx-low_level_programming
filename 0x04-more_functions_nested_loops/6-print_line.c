#include <stdio.h>
#include "main.h"

/**
 * print_line - function name
 * @n: number input
 * @i: number of times that under score printed
 * Description: a function to print line 
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
}
