#include <stdio.h>
#include "main.h"
#include <limits.h>

/**
 * print_number - print an integer
 * @n: this is a parameter
 * Description: a function to print an integer using _putchar
 * Return: 0
 */

void print_number(int n)
{
int i;
int power;
int num;

num = n;

if (num < 0)
{
num *= -1;
_putchar('-');
}

power = 1;

while (num >= 10)
{
power *= 10;
num /= 10;
}

num = n;
num = num < 0 ? num * -1 : num;

for (i = power; i >= 1; i /= 10)
{
int temp;

temp = num / i;
_putchar(temp + '0');
num %= i;

if (num % i == 0)
{
temp = 0;
}
}
}
