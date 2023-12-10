#include <stdio.h>
#include "main.h"

/**
 * clear_bit - check the code
 * @n: n
 * @index: index
 * Return: Always 0.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int a = 1;

	if (index > (sizeof(*n) * 8))
		return (-1);
	a <<= index;
	*n &= ~a;
	return (1);
}
