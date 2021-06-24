#include "holberton.h"

/**
* print_most_numbers - print 0-9 excluding 2 and 4
*
*/
void print_most_numbers(void)
{
	int x;

	for (x = 48; x < 58; x++)
	{
		if (x == 50 ||  x == 52)
			continue;
		else
			_putchar(x);
	}
	_putchar('\n');
}
