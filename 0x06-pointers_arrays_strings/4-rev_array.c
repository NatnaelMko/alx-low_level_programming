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
int j;
int temp;

for (i = 0, j = n; (i < n / 2); i++, j--)
{
temp = a[i];
a[i] = a[j];
a[j] = temp;
}
}
