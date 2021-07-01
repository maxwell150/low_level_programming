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
 *_strcat - concatinates two strings
 *@dest:destination pointer
 *@src:pointer to a string
 *Return: concatinated string
 */
char *_strcat(char *dest, char *src)
{
	char *cat = dest + _strlen(dest);
	int len =  _strlen(dest) + _strlen(src);

	while (*src)
	{
		*cat += *src;
		src++;
		cat++;
	}
	*cat += '\0';
	cat -= (len);
	*dest = *cat;

	return (cat);
}
