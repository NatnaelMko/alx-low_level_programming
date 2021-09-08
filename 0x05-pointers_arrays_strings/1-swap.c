#include "main.h"
#include <stdio.h>

/**
 * swap_int - swap values of two integers
 *
 * Descritpion: b parameter*
 * @a: a is 1st parameter
 * @b: b is 2nd parameter
 * Return: Always 0.
 */

void swap_int(int *a, int *b)
{
/* Description: a */
/* Description: b */

*a += *b;
*b = *a - *b;
*a -= *b;

}


