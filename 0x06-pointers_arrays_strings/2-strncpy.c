#include <stdio.h>
#include "main.h"

/**
 * _strncpy - print a string function
 * @dest: destination parameter
 * @src: source parameter
 * @n: number of elemets of a string to print
 * Description: small description
 * Return: 0
 */

char *_strncpy(char *dest, char *src, int n)
{
int i;

for (i = 0; i < n && src[i] != '\0'; i++)
{
dest[i] = src[i];
}

for ( ; i < n; i++)
dest[i] = '\0';

return (dest);
}
