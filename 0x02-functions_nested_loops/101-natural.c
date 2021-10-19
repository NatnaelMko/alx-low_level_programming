#include <stdio.h>

/**
 * printSum - this is the function
 * Description: This is is.
 * Return: 0
 */

void printSum(void)
{
int x;
int sum3 = 0, sum5 = 0;

for (x = 0; x < 1024; x++)
{
if (x % 3 == 0)
{
sum3 += x;
}
if (x % 5 == 0)
{
sum5 += x;
}
}
printf ("%d\n", sum3 + sum5);
return;
}
