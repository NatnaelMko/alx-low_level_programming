#include <stdio.h>
#include "main.h"

/**
 * print_rev - a function to print a string in reverse order
 * @s: the only variable
 * Description: a function to print string in reverse order
 * Return: 0
 */

void print_rev(char *s)
{
long c;
long j;

for (c = 0; s[c] != '\0'; c++)
{
;
}

for (j = c - 1; j >= 0; j--)
{
printf("%c", s[j]);
}

printf("\n");
}
