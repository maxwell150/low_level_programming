#include "holberton.h"
#include <stdio.h>

/**
 * isLower - determines whether ascii is lowercase
 * @i: character
 * Return: 1 if true, 0 if false
 */
int isLower(char i)
{
	return (i >= 97 && i <= 122);
}

/**
 * isDelimiter - determines whether ascii is a delimiter
 * @x: character
 * Return: 1 if true, 0 if false
 */
int isDelimiter(char x)
{
	int i;
	char delimiter[] = " \t\n,.!?\"(){}";

	for (i = 0; i < 12; i++)
		if (x == delimiter[i])
			return (1);
	return (0);
}

/**
 * cap_string - capitalizes all words of a string
 * @x: input string
 * Return: string with capitalized words
 */
char *cap_string(char *x)
{
	char *ptr = x;
	int foundDelimit = 1;

	while (*x)
	{
		if (isDelimiter(*x))
			foundDelimit = 1;
		else if (isLower(*x) && foundDelimit)
		{
			*x -= 32;
			foundDelimit = 0;
		}
		else
			foundDelimit = 0;
		x++;
	}
	return (ptr);
}
