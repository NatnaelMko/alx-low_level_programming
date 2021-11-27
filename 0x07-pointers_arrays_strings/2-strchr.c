#include <stdio.h>
#include "main.h"

/**
 * _strchr - this function returns a pointer to the first occurence of the character c 
 * @c: is a character to be searched on the string
 * @s: is a parameter string in which we find the character on
 * Description: short
 * Return: 0 
 */

char *_strchr(char *s, char c)
{

while (*s != '\0')
{

if (*s == c)
{
return(s);
}

else if (*(s + 1) == c)
{
return (s + 1);
}
s++;
}

return (s + 1);
}
