#include "main.h"
#include <stdio.h>

/**
 * _islower - checks for lowercase character
 *
 * Return: 0
 */


int isLower(int c) 
{
if (c >= 97 && c <= 122 )
{
return 1;
}
else
{
return 0; 
}
}
int main(void)
{
char c = 'D';
isLower(c);

return(0);
}


