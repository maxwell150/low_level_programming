#include "search_algos.h"

/**
  * interpolation_search - searches for a value in a sorted array of integers using the Interpolation search algorithm
  * @array: pointer to the first element of the array to search in.
  * @size: number of elements in the array.
  * @value: value to search for.
  * Return: -1 if array NULL or val not present
  */

int interpolation_search(int *array, size_t size, int value)
{
	size_t j, low, high;

	if (array == NULL)
		return (-1);

	for (low = 0, high = size - 1; high >= low;)
	{
		j = low + (((double)(high - low) / (array[high] - array[low])) * (value - array[low]));
		if (j < size)
			printf("Value checked array[%ld] = [%d]\n", j, array[j]);
		else
		{
			printf("Value checked array[%ld] is out of range\n", j);
			break;
		}

		if (array[j] == value)
			return (j);
		if (array[j] > value)
			high = j - 1;
		else
			low = j + 1;
	}

	return (-1);
}
