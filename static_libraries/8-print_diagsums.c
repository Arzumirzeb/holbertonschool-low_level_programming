#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - check the code
 * @a: integer
 * @size: variable
 * Return: Always 0.
 */
void print_diagsums(int *a, int size)
{
	int i = 0, j = size - 1;
	int sum_d1 = 0;
	int sum_d2 = 0;

	while (i <= size * size)
	{
		sum_d1 = sum_d1 + *(a + i);
		i = i + size + 1;
	}
	while (j < size * size - 1)
	{
		sum_d2 = sum_d2 + *(a + j);
		j = j + size - 1;
	}
	printf("%d, %d\n", sum_d1, sum_d2);
}
