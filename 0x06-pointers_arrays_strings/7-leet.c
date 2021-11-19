#include <stdio.h>
#include "main.h"

/**
 * leet - a function to replace charachters with words
 * @s: an input parameter string
 * Description: small
 * Return: 0
 */

char *leet(char *s)
{
int i;
int j;
int x[] = {97, 65, 52, 101, 69, 51, 111, 79, 48, 116, 84, 55, 108, 76, 49};

for (i = 0; s[i] != '\0'; i++)
{

for (j = 0; j < 15; j += 3)
{
if (s[i] == x[j] || s[i] == x[j + 1])
{
s[i] = x[j + 2];
}

}
}
return (s);
}
