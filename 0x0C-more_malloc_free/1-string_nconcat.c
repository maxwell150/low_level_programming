#include <stdlib.h>
#include "holberton.h"
/**
 * _strlen - counts the length of string.
 * @s: Value string check.
 * Return: String.
 */
int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0';)
	{
		i++;
	}
	return (i);
}
/**
 * string_nconcat - concatenate two strings.
 * @s1: first string.
 * @s2: second string.
 * @n: bytes for s2 to use.
 * Return: Only both strings.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{

	unsigned int i, len1, len2;
	char *c;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	len1 = _strlen(s1);
	len2 = _strlen(s2);

	if (n >= len2)
	{
		n = len2;
	}

	c = malloc(sizeof(char) * (len1 + n + 1));
	if (c == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		c[i] = s1[i];
	for (; i < len1 + n; i++)
		c[i] = s2[i - len1];
	c[len1 + n] = '\0';

	return (c);
}
