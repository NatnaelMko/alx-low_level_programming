#include <stdio.h>
#include "main.h"

/**
 * _memcpy - a function to replace elements of a string
 * @n: number of character stirngs to be replaced
 * @src: a source string
 * @dest: a destination string
 * Description: Short one
 * Return: 0
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;
unsigned int j;

for (i = 0; i < n; i++)
{
for (j = 0; j <= i; j++)
{
dest[i] = src[j];
}
}
return (dest);
}
