#include <stdio.h>
#include "main.h"

/**
 * _memset - a function to replace elements of a string
 * @b: a characteer to replace
 * @n: number of characters.
 * @s: a string declaration
 * Description: Short one
 * Return: 0
 */

char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;

for (i = 0; i < n; i++)
{
s[i] = b;
}
return (s);
}
