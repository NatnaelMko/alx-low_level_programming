#include <stdio.h>
#include "main.h"

/**
 * print_numbers - print an integer
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

if (n == 0)
{
_putchar(n + '0');
}

power = 1;

while (num >= 10)
{
power *= 10;
num /= 10;
}

num = n;
num = num < 0? num * -1 : num;

for (i = power; i >= 1; i /= 10)
{
int temp = num /= i;
_putchar(temp + '0');
num %= i;
}
}
