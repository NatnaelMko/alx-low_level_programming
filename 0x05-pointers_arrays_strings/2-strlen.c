#include "main.h"
#include <stdio.h>
#include "string.h"

/**
 * _strlen - check the code
 * @s: here is a string with number of characheters.
 *
 * Return: Always 0.
 */

int _strlen(char *s)
{
int c = 0;

while (s[c] != '\0')
{
c++;
}

return (c);
}
