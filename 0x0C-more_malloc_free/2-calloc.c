#include <stdlib.h>
#include "holberton.h"

/**
 *_calloc -allocates memory for an array
 *@nmemb: number of element in the array
 *@size: bytes for each position in the array
 *Return: pointer void
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *x;
	unsigned int a;

	if (nmemb == 0 || size == 0)
		return (NULL);

	x = malloc(nmemb * size);
	if (x == NULL)
		return (NULL);

	for (a = 0; a < nmemb * size; a++)
		x[a] = 0;

	return (x);

}
