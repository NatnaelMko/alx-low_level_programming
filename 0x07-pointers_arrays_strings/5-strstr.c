#include <stdio.h>
#include "main.h"

/**
 * _strstr - function finds the first occurrence of the substring
 * @haystack: a stirng parameter
 * @needle: a string parameter
 * Description: short
 * Return: 0
 */

char *_strstr(char *haystack, char *needle)
{
int j;

while (*haystack != '\0')
{
for (j = 0; needle[j] != '\0'; j++)
{

if (*haystack == needle[0])
{

return (haystack);
}

else if (needle[j + 1] == '\0')
{
break;
}

}
haystack++;
}

return (NULL);
}
