#include <stdio.h>
#include "main.h"

/**
 * _strspn - a self made function
 * @s: a stirng parameter
 * @accept: parameter
 * Description: a function
 * Return: 0;
 */

unsigned int _strspn(char *s, char *accept)
{
int i;
int count;

for (i = 0; s[i] != '\0'; i++)
{
;
}
for (count = 0; accept[count] != '\0'; count++)
{
;
}

if (accept[count] == s[i])
{
;
}

else if (accept[count] != s[i])
{
return (0);
}
return (count + 1);
}
