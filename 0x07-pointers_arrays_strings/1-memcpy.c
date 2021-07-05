#include "holberton.h"
/**
* _memcpy - copies memory
* @dest: destination string
* @src: source str
* @n: n.o of bytes to be copied
* Return: pointer to dest
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *ptr;
	*ptr = dest;

	while (n--)
		*dest++ = *src++;
	return (ptr);
}
