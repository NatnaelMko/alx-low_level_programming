#include <stdio.h>

/**
 * main - a function to print even numbers in fibonacci series up to 4,000,000
 * Description: Read the above
 * Return: 0;
 */

int main(void)
{
int even_sum = 0;
long a = 1;
long b = 1;
long sum;

while(b < 4000000)
{
if (b % 2 == 0)
{
even_sum += b;
}

sum = a;
a = b;
b += sum;
}
printf("\n");
return (0);
}