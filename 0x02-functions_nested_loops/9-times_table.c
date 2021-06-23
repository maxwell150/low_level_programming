#include "holberton.h"
/**
 * times_table - prints times table
 */
void times_table(void)
{
	int x, y, z;

	x = 0;

	while (x < 10)
	{
		for (y = 0; y < 10; y++)
		{
			if (y == 0)
			{
				_putchar(48);
				continue;
			}
			z = x * y;
			_putchar(',');
			_putchar(' ');
			if (z >= 10)
			{
				_putchar(z / 10 + 48);
				_putchar(z % 10 + 48);
			}
			else
			{
				_putchar(' ');
				_putchar(z + 48);
			}
		x++;
		}
	_putchar('\n');
	}
}
