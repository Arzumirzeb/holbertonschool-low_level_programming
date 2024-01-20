#include "search_algos.h"

/**
* print_array - print array of integers
* @low: low index
* @high: high index
*/
void print_array(int *array, size_t low, size_t high)
{
	size_t i;

	printf("Searching in array: ");

	for (i = low; i <= high; i++)
	{
		printf("%d", array[i]);
		if (i != high)
			printf(", ");
	}
	printf("\n");
}

/**
* binary_search - search array
* @array: array
* @size: size
* @value: value
* Return: Always EXIT_SUCCESS
*/
int binary_search(int *array, size_t size, int value)
{
	size_t half, low, high;

	if (!array)
		return (-1);

	low = 0;
	high = size - 1;

	while (low <= high)
	{
		print_array(array, low, high);
		half = (low + high) / 2;
		if (array[half] > value)
			high = half - 1;
		else if (array[half] < value)
			low = half + 1;
		else
			return (half);
	}
	return (-1);
}
