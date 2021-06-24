#include "holberton.h"

/**
 * print_numbers - print 0-9
 */
void print_numbers(void)
{
	int x;

	for (x = 0; x < 10; x++)
		_putchar(x + 48);

	_putchar('\n');
}
