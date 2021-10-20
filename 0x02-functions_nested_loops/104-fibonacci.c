#include <stdio.h>

/**
 * main - a function to print the first 98 fibonacci numbers
 * Description: refer the description above
 * Return: 0
 */

int main(void)
{
int i;

long a = 1;
long b = 2;
long sum = 0;

for (i = 1; i <= 40; i++)
{
sum = a;
a = b;
b += sum;

if (i < 40)
{
printf("%lu, ", sum);
}
if (i == 40)
{
printf("%lu", sum);
}
}
printf("\n");
return (0);
}
