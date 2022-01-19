#include "search_algos.h"

/**
  * binary_search - searches for a value in a sorted array of integers using the Binary search algorithm 
  * @array: A pointer to the first element
  * @size: number of elements in  array.
  * @value: value to search for.
  * Return: -1 if value not in array or array null
  * Description: Prints the [sub]array being searched after each change.
  */

int binary_search(int *array, size_t size, int value)
{
	size_t j, left, right;

	if (array == NULL)
		return (-1);

	for (left = 0, right = size - 1; right >= left;)
	{
		printf("Searching in array: ");
		for (j = left; j < right; j++)
			printf("%d, ", array[j]);
		printf("%d\n", array[j]);

		j = left + (right - left) / 2;
		if (array[j] == value)
			return (j);
		if (array[j] > value)
			right = j - 1;
		else
			left = j + 1;
	}

	return (-1);
}
