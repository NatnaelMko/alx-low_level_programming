#include <stdio.h>
#include "main.h"

/**
 * _puts - prints a string
 * @str: an array
 * Description: a function to print a string
 * Return: 0
 */

void _puts(char *str)
{
long c = 0;

while (str[c] != '\0')
{
printf("%c\n", str[c]);
c++;
}
}
