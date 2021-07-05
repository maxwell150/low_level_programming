#include "holberton.h"

/**
 * _memcpy - copies memory
 * @dest: destination str
 * @src: source str
 * @n: number of bytes to copy
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *ptr = dest;

	while (n--)
		*dest++ = *src++;
	return (ptr);
}













