#include "main.h"

/**
 * powX- powers a number b to the p's power
 * @b: base
 * @p: power
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
 * set_bit - prints the binary representation of a number
 * @n: input integer
 * @index: returns the value of a bit at a given index
 * Return: 1 for ssucess -1 for failure
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int test;

	if (index > sizeof(n) * BIT_SIZE - 1)
		return (-1);


	test = powX(2, index);
	*n = *n | test;
	return (1);

}
