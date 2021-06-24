#include "holberton.h"

/**
* _isupper - checks if c is an uppercase letter
* @c: integer to test
* Return: 1 for true, 0 for false
*/
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	return (0);
}
