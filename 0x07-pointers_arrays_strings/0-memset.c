#include "holberton.h"
/**
* _memset - fills memory
* @s: memory
* @b: constant byte
* @n:bytes of the memory area
* Return: pointer to memory
*/
char *_memset(char *s, char b, unsigned int n)
{
	char *ptr;
	*ptr = s;

	while (n--)
		*s++ = b;
	return (ptr);
}
