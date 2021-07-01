#include "holberton.h"
/**
 * leet - encodes a string into 1337
 * @x: String
 * Return: string that is encoded
 */
char *leet(char *x)
{
	char *cp = x;
	char key[] = {'A', 'E', 'O', 'T', 'L'};
	int value[] = {4, 3, 0, 7, 1};
	unsigned int i;

	while (*x)
	{
		for (i = 0; i < sizeof(key) / sizeof(char); i++)
		{
			/*32 is the difference between lower case letters and apper case letters*/
			if (*x == key[i] || *x == key[i] + 32)
			{
				*x = 48 + value[i];
			}
		}
		x++;
	}

	return (cp);

}
