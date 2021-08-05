#include "main.h"
/**
 * powX-powers a number b to the p's power
 * @b: base
 * @p : power
 * Return: return b to the power of a
 */
unsigned long int powX(int b, int p)
{
	unsigned long int ans = 1;

	while (p)
	{
		ans *= b;
		p--;
	}
	return (ans);
}

/**
 * get_bit - returns the value at an index
 * @n: input unsigned long
 * @index: index to return
 * Return: value at input index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int test;

	if (index > sizeof(n) * BIT_SIZE - 1)
		return (-1);


	test = powX(2, index);
	if (test & n)
		return (1);
	else
		return (0);
}
