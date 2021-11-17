#include "main.h"
#include <stdio.h>

/**
 * _strcmp - compare two strings
 * @s1: first string
 * @s2: second string
 * Description: small description
 * Return: 0
 */

int _strcmp(char *s1, char *s2)
{
int i;
int compare;

for (i = 0; s1[i] != '\0' || s2[i] != '\0'; i++)
{
if (s1[i] != s2[i] && (s1[i] != '\0' && s2[i] != '\0'))
{

compare = s1[i] - s2[i];
break;
}

if (s1[i] != s2[i] && s1[i] == '\0')
{
compare = 0 - s1[i];
break;
}

if (s1[i] != s2[i] && s2[i] == '\0')
{
compare = s2[i] - 0;
break;
}
}

while (s1[i] == s2[i] && (s1[i] == '\0' && s2[i] == '\0'))
{
compare = 0;
break;
}

return (compare);
}
