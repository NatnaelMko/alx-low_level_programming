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
unsigned int i;
unsigned int j;
unsigned int c = 0;

for (i = 0; s[i] != '\0'; i++)
{
for (j = 0; accept[j] != '\0'; j++)
{
if (s[i] == accept[j])
{
c++;
break;
}

else if (accept[j + 1] == '\0')
{
return (c);
}

}
}
return (c);
}
