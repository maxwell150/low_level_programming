#include "holberton.h"
/**
* check_prime - function for is_prime
* Description - check for prime
* @n: input number
* @x: iterator
* Return: 1 if true, 0 false
*/
int check_prime(int n, int x)
{
	if (x == 1)
		return (1);

	if (n % x == 0)
		return (0);
	return (check_prime(n, x - 1));
}
/**
* is_prime_number - check for prime
* @n: input number
* Return: 1 if true, 0 if false
*/
int is_prime_number(int n)
{
	if (n < 3)
		return (0);
	return (check_prime(n, n - 1));
}
