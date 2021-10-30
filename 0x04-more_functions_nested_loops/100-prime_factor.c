#include <stdio.h>
#include "main.h"
/**
 * Description: a function that finds and pirngs the largest prime factor of the number
 * @n: a parameter
 * Return: 0
 */

int is_prime(int n)
{
int i;

for (i = 2; i < n; i++)
{
if (n % i == 0)
{
return (0);
}
}
/* printf("%d, is prime number", n);*/
return (1);
}

int largerst_prime_factor(int n)
{
int i;
for (i = n; i > 1; i--)
{
if (is_prime(i) == 1)
{
if (n % i == 0)
{
printf("%d", i);
return(i);
}
}
}
return(0);
}
