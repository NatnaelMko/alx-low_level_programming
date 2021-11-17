#include <stdio.h>
#include "main.h"

/**
 * reverse_array - reverse the code
 * @a: an array of integers
 * @n: the number of elements to swap
 * Description: Small description
 * Return: nothing.
 */

void reverse_array(int *a, int n)
{
int i;

for (i = n - 1; i >= 0; i--)
{
if (i < n - 1)
{
printf(", ");
}
printf("%d", a[i]);
}
printf("\n");
}
