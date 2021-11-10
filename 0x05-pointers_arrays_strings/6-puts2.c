#include <stdio.h>
#include "main.h"

void puts2(char *str)
{
int count;
for (count = 0; str[count] != '\0'; count++)
{
if (count % 2 == 0)
{
printf("%c", str[count]);
}
}
}
