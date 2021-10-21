#include "main.h"
#include <stdio.h>

/**
 * _isupper - a function to identify the uppercase letter
 * @c: this is a char input to the function
 * Definition: refer above
 * Return: 0
 */

int _isupper(int c)
{
if (c >= 65 && c <= 90)
{
return (1);
}
else
{
return (0);
}
}
