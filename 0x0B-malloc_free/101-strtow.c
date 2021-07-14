#include "holberton.h"

/**
 * strtow - splits a string into words
 * @str: string of words to be split
 * Return: double pointer to strings
 */
char **strtow(char *str)
{
	char **ptr;
	int i, k, len, start, end, j = 0;
	int words =  count_words(str);

	if (!str || !count_words(str))
		return (NULL);
	ptr = malloc(sizeof(char *) * (words + 1));
	if (!ptr)
		return (NULL);
	for (i = 0; i < words; i++)
	{
		start = start_index(str, j);
		end = end_index(str, start);
		len = end - start;
		ptr[i] = malloc(sizeof(char) * (len + 1));
		if (!ptr[i])
		{
			i -= 1;
			while (i >= 0)
			{
				free(ptr[i]);
					i--;
			}
			free(ptr);
			return (NULL);
		}
		for (k = 0; k < len; k++)
			ptr[i][k] = str[start++];
		ptr[i][k++] = '\0';
		j = end + 1;
	}
	ptr[i] = NULL;
	return (ptr);
}

/**
 * isSpace - determines if character is a space or not
 * @c: input char
 * Return: 1 if true or 0 or not
 */
int isSpace(char c)
{
	return (c == ' ');
}

/**
 * start_index - returns first index of non-space char
 * @s: input string
 * @index: starting index
 * Return: index of first non-space char
 */
int start_index(char *s, int index)
{

	while (isSpace(*(s + index)))
		index++;
	return (index);
}

/**
 * end_index - returns last index of non-space char
 * @s: input string
 * @index: starting index
 * Return: index of last index of non-space char
 */
int end_index(char *s, int index)
{
	while (!isSpace(*(s + index)))
		index++;
	return (index);
}

/**
 * count_words - counts numbers of words in string
 * @s: input string
 * Return: number of words
 */
int count_words(char *s)
{
	int wordOn = 0;
	int words = 0;

	while (*s)
	{
		if (isSpace(*s) && wordOn)
			wordOn = 0;
		else if (!isSpace(*s) && !wordOn)
		{
			wordOn = 1;
			words++;
		}
		s++;
	}
	return (words);
}
