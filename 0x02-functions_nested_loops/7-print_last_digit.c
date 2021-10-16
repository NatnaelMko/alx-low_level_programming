#include "main.h"
#include <stdio.h>

/**
 * _abs - this is the function
 *
 * @n: this is a variable
 *
 * Description: This is the longest description
 *
 * Return: 0
 */

int print_last_digit(int n)
{
if (n >= 0)
{
return (n % 10);
}
else
{
return (-1 * (n % 10));
}
}
