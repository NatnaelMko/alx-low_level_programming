#include <stdio.h>
#include "main.h"

/**
 * puts_half - a function to print half of the string
 * @str: an array parameter
 * Description: it is a function
 * Return: 0
 */

void puts_half(char *str)
{
long i;
long count;
long n;
for (count = 0; str[count] != '\0'; count++)
{
;
}

if (count + 1 % 2 != 0)
{
n = (count + 1) / 2;
}
else
{
n = count / 2;
}

for (i = n; i < count; i++)
{
printf("%c", str[i]);
}
printf("\n");
}
