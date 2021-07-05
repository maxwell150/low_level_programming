#include "holberton.h"
/**
* _strspn - gets the length of pre-string
* @s: str to check
* @accept: bytes to take
* Return: n.o to bytes in initial s
*/
unsigned int _strspn(char *s, char *accept)
{
	unsigned int res = 0;
	int x, f_char;

	while (*s)
	{
		for (x = 0; accept[x]; x++)
		{
			f_char = 0;
			if (*s == accept[x])
			{
				res++;
				f_char = 1;
				break;
			}
		}
		if (!f_char)
			break;
		s++;
	}
	return (res);
}
