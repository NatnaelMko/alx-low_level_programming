#include <stdio.h>
#include "main.h"

/**
 * puts2 - prints every other character
 * Description: express function
 * @str: an array parameter
 * Return: 0
 */

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
printf("\n");
}
