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
int is_positive = 1;

for (count = 0; s[count] != '\0'; count++)
{
   
if (s[count] > 47 && s[count] < 58)
{
n = (n * 10) + (s[count] - '0');

if (n > 0 && n < 10 && s[count - 1] == 45) 
{
is_positive = 0;
}

}
}

if (!is_positive) 
{
n *= -1;
}

return (n);
}