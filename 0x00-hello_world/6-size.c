#include <stdio.h>

/**
 * main - entry point
 *
 * Description: My
 *
 * Return: 0
 */
int main(void)

{
int i;
char c;
float f;
long int li;
long long int lli;

printf("Size of an int is: %lu byte(s)\n", (unsigned long)sizeof(i));
printf("Size of a char is: %lu byte(s)\n", (unsigned long)sizeof(c));
printf("Size of a long int is: %lu byte(s)\n", (unsigned long)sizeof(li));
printf("Size of a long long int is: %lu byte(s)\n", (unsigned long)sizeof(lli));
printf("Size of a float is: %lu byte(s)\n", (unsigned long)sizeof(f));

return (0);
}
