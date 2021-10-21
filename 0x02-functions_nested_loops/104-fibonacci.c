#include <stdio.h>

/**
 * main - a function to print the first 98 fibonacci numbers
 * Description: refer the description above
 * Return: 0
 */

int main(void)
{
int i;

unsigned long a = 1;
unsigned long b = 2;
unsigned long sum = 0;

for (i = 1; i <= 98; i++)
{
sum = a;
a = b;
b += sum;

if (i < 98)
{
printf("%lu, ", sum);
}
if (i == 98)
{
printf("%lu", sum);
}
}
printf("\n");
return (0);
}
