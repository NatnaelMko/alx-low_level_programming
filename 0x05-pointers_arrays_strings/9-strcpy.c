#include <stdio.h>
#include "main.h"

/**
 * _strcpy - copy string
 * @dest: destination parameter
 * @src: source of string parameter
 * Description: short
 * Return: 0
 */

char *_strcpy(char *dest, char *src)
{
long count;
for (count = 0; src[count] != '\0'; count++)
{
dest[count] = src[count];
}
dest[count] = src[count];
return (dest);
}
