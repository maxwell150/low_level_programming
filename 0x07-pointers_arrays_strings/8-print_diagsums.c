#include "holberton.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals
 * of a square matrix of integers
 * @a: array to be printed
 * @size: size of a
 */
void print_diagsums(int *a, int size)
{
	int x, j, sum = 0;

	for (x = 0; x < size; x++)
		sum += *(a + x * size + x);

	printf("%i, ", sum);
	sum = 0;

	for (y = 0; y < size; y++)
		sum += *(a + size * (y + 1) - (y + 1));

	printf("%i\n", sum);
}
