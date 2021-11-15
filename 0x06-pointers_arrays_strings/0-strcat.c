#include <stdio.h>
#include "main.h"

/**
 * _strcat - print a string function
 * @dest: destination parameter
 * @src: source parameter
 * Description: small description
 * Return: 0
 */

char *_strcat(char *dest, char *src)
{
int i;
int j;
int count;

for (count = 0; dest[count] != '\0'; count++)
{
;
}

for (i = 0, j = count; src[i] != '\0'; i++, j++)
{

dest[j] = src[i];

}
return (dest);
}
