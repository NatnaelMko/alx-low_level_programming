#include <stdio.h>
/**
 * main - this is a fibonacci function
 * Description: this function prints 50 fibonnacci numbers starting 1, 2
 * Return: 0
 */

int main(void)
{
int i;
long t1 = 0, t2 = 1;
long next = 0;

for (i = 2; i <= 52; i++)
{
next = t1 + t2;
t1 = t2;
t2 = next;

if (i < 52)
{
printf("%lu, ", next);
}
else
{
printf("%lu", next);
}
}
printf("\n");
return (0);
}
