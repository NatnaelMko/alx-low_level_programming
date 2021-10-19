#include <stdio.h>
#include "main.h"

/**
 * printSum - this is the function
 * Description: This is is.
 * Return: 0
 */

void printSum(void)
{
int x;
int total = 0;

for (x = 1; x < 1024; x++)
{
if (x % 3 == 0)
{
total += x;
}
else if (x % 5 == 0)
{
total += x;
}
}
printf("%d\n", total);
}
