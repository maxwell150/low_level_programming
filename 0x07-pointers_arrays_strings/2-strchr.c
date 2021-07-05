#include "holberton.h"
#include <stdio.h>
/**
* _strchr - locates a character
* @s: string to be searched
* @c: target
* Return: pointer to first occurence of c or null if char not found
*/
char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (c == *s)
		{
			return (s);
		}
		s++;
	}
	if (!c)
		return (s);
	return (NULL);
}
