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
int i;
int j;

for (i = 0; s[i] != '\0'; i++)
{
for (j = 0; accept[j] != '\0'; j++)
{

if (((s[i] >= 65 && s[i] <= 90) || (s[i] >= 97 && s[i] <= 122)) && s[i] == accept[j])
{
s++;
break;
}

else if (((s[i] >= 65 && s[i] <= 90) || (s[i] >= 97 && s[i] <= 122)) && s[i] != accept[j])
{
break;
}

else if (!((s[i] >= 65 && s[i] <= 90) || (s[i] >= 97 && s[i] <= 122)))
{
s++;
break;
}

}
}

return(s);
}
