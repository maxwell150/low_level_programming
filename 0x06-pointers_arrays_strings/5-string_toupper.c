#include "holberton.h"

/**
 * string_toupper - changes all lowercase letters of a string to
 * uppercase
 * @x: string to be passed
 * Return: capitalized string
 */
char *string_toupper(char *x)
{
	char *ptr = x;

	while (*x)
	{
		if (*x >= 97 && *x <= 122)
			*x -= 32;
		x++;
	}
	return (ptr);
}
