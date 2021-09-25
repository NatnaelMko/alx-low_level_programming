#include "main.h"

int main()
{
	char *ch = "_putchar";

	while(*ch)
	{
		_putchar(*ch);
		ch++;
	}
	_putchar('\n');

	return (0);
}
