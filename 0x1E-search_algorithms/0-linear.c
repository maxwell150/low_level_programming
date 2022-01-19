#include "search_algos.h"

/**
 * linear_search - implementating linear search algorithm
 * @array: pointer to 1st element
 * @size: num of elements in array
 * @value: value to search
 * Return: Null or -1 if num not present or array is null
 */

int linear_search(int *array, size_t size, int value)
{
	size_t j;

	if (!array)
		return (-1);

	for (j = 0; j < size; j++)
	{
		printf("Value checked array[%i] = [%i]\n", (int)j, array[j]);
		if (array[j] == value)
			return (j);
	}

	return (-1);
}
