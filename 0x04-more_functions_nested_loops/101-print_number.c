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

if (n < 0)
{
_putchar('-');
n *= -1;
}

num = n;
power = 1;

while (num >= 1)
{
num /= 10;
power *= 10; 
}

power /= 10;

num = n;
for (i = power; i >= 1; i /= 10)
{
int temp = num / i;
putchar(temp + '0');
num %= i;
}
}
