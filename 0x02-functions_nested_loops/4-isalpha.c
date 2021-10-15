#include "main.h"
#include <stdio.h>

/**
 * _isalpha - checks for lowercase character
 *
 * @c: first parameter
 * Description: Longer description
 *
 * Return: 0
 */

int _isalpha(int c)
{
if (c >= 65 && c <= 122)
{
return (1);
}
else
{
return (0);
}
}
