#include "search_algos.h"
/**
 * binary_search - function searches for a value in a sorted array of
 * integers using the Binary search algorithm
 *
 * @array: pointer to the first element of the array to search
 *
 * @size: number of elements in array
 * @value: value to search for
 * Return: first index where value is located or -1 otherwise
 */
int binary_search(int *array, size_t size, int value)
{
	int strt = 0;
	int fin;
	int mid;
	int i;

	fin = size - 1;
	while (strt <= fin)
	{
		printf("Searching in array: ");

		for (i = strt; i <= fin; i++)
			i < fin ? printf("%d, ", array[i]) : printf("%d\n", array[i]);

		mid = (strt + fin) / 2;

		if (array[mid] == value)
			return (mid);

		else if (value < array[mid])
			fin = mid - 1;
		else
			strt = mid + 1;
	}
	return (-1);
}
