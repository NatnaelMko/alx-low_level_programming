#include <stdio.h>
#include "main.h"

/**
 * print_sign - this is the function
 *
 * @n: this is a variable
 *
 * Description: This is the longest description
 *
 * Return: 0
 */

int print_sign(int n)
{
    if (n > 0)
    {
        printf("+\r"); 
        return (1);
    } else if (n == 0)
    {
        printf("0\r");
        return (0);
    } else
    {
        printf("-\r");
        return (-1);
    }
}
