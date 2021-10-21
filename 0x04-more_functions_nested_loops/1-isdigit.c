#include <stdio.h>
#include "main.h"

/**
 * _isdigit - a function to identify a digit from letters
 * @c: a variable
 * Description: refer the above
 * Return: 0
 */

int _isdigit(int c)
{
if (c >= 48 && c <= 57)
{
return (1);
}
else
{
return (0);
}
}
