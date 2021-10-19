#include <stdio.h>

int main(void)
{
int i;
int t1 = 0, t2 = 1;
int next = 0;

for (i = 0; i < 50; i++)
{
if (i <= 1)
{
next = i;
}
else
{
next = t1 + t2;
t1 = t2;
t2 = next;
}
printf("%d, \n", next);
}
return (0);
}
