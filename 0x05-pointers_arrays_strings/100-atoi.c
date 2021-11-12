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
int n_count = 0;
int n = 0;

for (count = 0; s[count] != '\0'; count++)
{
if (s[count] == 45 && n == 0)
{
n_count++;
}

if (s[count] > 47 && s[count] < 58)
{

if (n_count % 2 == 0)
{
n = (n * 10) + (s[count] - '0');
}
else
{
n = (n * 10) - (s[count] - '0');
}
}

else if (n != 0)
{
break;
}
}
return (n);
}
