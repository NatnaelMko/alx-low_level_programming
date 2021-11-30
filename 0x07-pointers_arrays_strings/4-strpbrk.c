#include <stdio.h>
#include "main.h"

/**
 * _strpbrk - function locates the first occurance of the string
 * @s: a string parameter
 * @accept: a string parameter
 * Description: Short one
 * Return: 0
 */

char *_strpbrk(char *s, char *accept)
{
int j;

while(*s != '\0')
{
for (j = 0; accept[j] != '\0'; j++)
{

if (*s == accept[j])
{

return(s);
}

else if (accept[j + 1] == '\0')
{
break;
}

}
s++;
}

return(s);
}
