#include "search_algos.h"


/**
 * linear_search - an implementation of the linear search
 *                 algorithm
 * @array: the array to be searched
 * @size: the size of the array
 * @value: the  value of which's location is being searched for
 * Return: the first location of value inside array or -1 if
 *          it can't be found
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (!array)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%i] = [%i]\n", (int)i, array[i]);
		if (array[i] == value)
			return (i);
	}

	return (-1);
}
