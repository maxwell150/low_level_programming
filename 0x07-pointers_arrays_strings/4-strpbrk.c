#include "holberton.h"
#include <stdio.h>
/**
* _strpbrk - search str for any bytes
* @s: str to search
* @accept: bytes to take
* Return: pointer to byte that matches accept or NULL if not found
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
