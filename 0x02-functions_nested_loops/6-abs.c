#include "holberton.h"
/**
 * _abs - returns absolute of n
 * @n: integer to be checked
 * Return: |n|
 */
int _abs(int n)
{
	if (n < 0)
		return (n * -1);
	return (n);
}
