#include "holberton.h"

/**
* print_square - prints a square
* @size: dimensions of square
*/
void print_square(int size)
{
	int x, y;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (x = 0; x < size; x++)
		{
			for (y = 0; y < size; y++)
				_putchar('#');

			_putchar('\n');
		}
	}
}
