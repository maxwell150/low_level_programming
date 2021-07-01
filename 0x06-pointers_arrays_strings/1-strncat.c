#include <stdio.h>
#include "holberton.h"

/**
 *_strlen - returns the length of a string
 *@str:a string of length to be returned
 *Return: returns the length of a string
 */
int _strlen(char *str)
{
	int len = 0;

	while (*str)
	{
		str++;
		len++;
	}

	return (len);

}


/**
 *_strncat - concatinates two strings
 *@dest:destination pointer
 *@src:pointer to a string
 *@n:amount tot be concatenated
 *Return: concatinated string
 */
char *_strncat(char *dest, char *src, int n)
{
	char *cat = dest + _strlen(dest);
	int len;

	if (n > _strlen(src) + _strlen(dest))
		len =  _strlen(dest) + _strlen(src);
	else
		len = _strlen(dest) + n;

	while (*src && n > 0)
	{
		*cat += *src;
		src++;
		cat++;
		n--;
	}
	if (n > 0)
		*cat += '\0';
	cat -= (len);
	*dest = *cat;

	return (cat);
}
