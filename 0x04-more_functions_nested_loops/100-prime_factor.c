#include <stdio.h>

/**
 * Description: a function that finds and pirngs the largest prime factor of the number
 * @n: a parameter
 * Return: 0
 */

#include <stdio.h>

int is_prime(long n)
{
long i;

for (i = 2; i < n; i++)
{
if (n % i == 0)
{
return (0);
}
}
return (1);
}

int largerst_prime_factor(long n)
{
long i;
for (i = n; i > 1; i--)
{
if (is_prime(i) == 1)
{
if (n % i == 0)
{
printf("%li is largest prime factor of %li", i, n);
}
}
}
return(i);
}
