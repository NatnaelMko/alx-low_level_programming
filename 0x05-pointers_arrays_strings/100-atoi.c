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
int n = 0;
int j;
int i;
int is_positive = 1;

for (count = 0; s[count] != '\0'; count++)
{

if (s[count] > 47 && s[count] < 58)
{
n = (n * 10) + (s[count] - '0');

for (j = count; j >= 0; j--)
{

if (n > 0 && n < 10 && s[j] == 45)
{
for (i = 0; j >= 0; j--, i++)
{
;
}

if (i % 2 != 0)
{
is_positive = 0;
}
else
{
continue;
}

}
}

if (s[count + 1] > 47 && s[count + 1]  < 58)
{
continue;
}
else
{
break;
}

}
}

if (!is_positive)
{
n *= -1;
}

return (n);
}
