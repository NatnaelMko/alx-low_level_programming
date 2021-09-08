#include "main.h"
#include <stdio.h>

/**
 * swap_int - swap values of two integers
 *
 * Descritpion: b parameter*
 *  
 * Return: Always 0.
 */

void swap_int(int *a, int *b)
{

*a += *b;
*b = *a - *b;
*a -= *b;

}


