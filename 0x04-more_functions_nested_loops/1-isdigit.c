#include "holberton.h"

/**
* _isdigit - checks whether int c is a digit
* @c: integer c
* Return: 1 if true or 2 if false
*
*/
int _isdigit(int c)
{
	if (c >= 48 && c < 58)
		return (0);
	return (1);
}
