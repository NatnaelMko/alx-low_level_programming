#include <stdio.h>
#include "main.h"

/**
 * _atoi - converts a string to number
 * @s: a stirng input
 * Description: short
 * Return: 0
 */

int _atoi(char *s)
{
int count;
int n;

for (count = 0; s[count] != '\0'; count++)
{
if (s[count] >= 48 && s[count] < 59)
{
n = s[count];
_putchar(n + '0');
}
}

return (0);
}
