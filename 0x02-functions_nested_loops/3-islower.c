#include "holberton.h"
/**
* _islower - checks whether a character is lower or upper case
* @c: is an parameter for an argument
* Return: 0
*
*/
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	return (0);
}
