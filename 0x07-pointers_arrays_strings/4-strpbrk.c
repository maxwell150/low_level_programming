#include "holberton.h"
#include <stdio.h>

/**
 * _strpbrk - searches a string
 * @s: string to search
 * @accept: bytes to take
 * Return: pointer to be the byte that matches accept or NULL if not found
 */
char *_strpbrk(char *s, char *accept)
{
	int x;

	while (*s)
	{
		for (x = 0; accept[x]; x++)
			if (*s == accept[x])
				return (s);
		s++;
	}
	return (NULL);
}
