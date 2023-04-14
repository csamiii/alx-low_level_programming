#include "search_algos.h"

/**
 * linear_search - function searches for a value in
 * an array of integers using the Linear search algorithm
 *
 * @array: pointer to the first element of the array
 * @size: number of elements in array
 * @value: value to search
 * Return: 1 where value is located or -1 otherwise
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;
	
	for (i=0; array && i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
