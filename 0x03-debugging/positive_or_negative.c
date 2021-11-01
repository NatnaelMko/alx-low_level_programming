#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "main.h"

/**
 * main - entry point
 *
 * Descritpion: if els
 *
 * Return: 0
 */

void positive_or_negative(int i)
{

srand(time(0));
i = rand() - RAND_MAX / 2;

if (i > 0)
{
printf("98 is positive\n");
}
else if ((i < 0))
{
printf("-98 is negative\n");
} else
{
printf("0 is zero\n");
}
}
