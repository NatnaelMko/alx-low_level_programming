#include <stdio.h>
#include "main.h"

/**
 * rev_string - a function to reverse a string
 * @s: an array of string
 * Description: a function to reverse
 * Return: 0
 */

void rev_string(char *s)
{
int c, j, l;
char h;

for (c = 0; s[c] != '\0'; c++)
{
;
}

l = c;
for (c--, j = 0; j < l / 2; c--, j++)

{
h = s[j];
s[j] = s[c];
s[c] = h;
}
}
