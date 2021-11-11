#include <stdio.h>
#include "main.h"

/**
 * print_array -  function to print n elements of an array
 * @a: array
 * @n: number of elements of an array
 * Description: SHort description
 * Return: 0
 */

void print_array(int *a, int n)
{
int i;
for (i = 0; i < n - 1 && a[n] != '\0'; i++)
{
printf("%d, ", a[i]);
}
if (i == n-1)
{
printf("%d", a[i]);
}
printf("\n");
}
