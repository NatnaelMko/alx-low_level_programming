#include <stdio.h>

long main(void)
{
int i;
long t1 = 0, t2 = 1;
long next = 0;

for (i = 2; i < 51; i++)
{
if (i <= 1)
{
next = i;
printf("%d, ", next);
}
else if (i < 51)
{
next = t1 + t2;
t1 = t2;
t2 = next;
printf("%d, ", next);
}
else
{
printf("%d", next);
}
printf("\n");
return (0);
}
}
