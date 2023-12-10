#include <stdio.h>
#include "main.h"

/**
 * flip_bits - check the code
 * @n: n
 * @m: m
 * Return: Always 0.
 *
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int count = 0;
	unsigned long int a = n ^ m;

	while (a != 0)
	{
		if ((a & 1) == 1)
			count++;
		a >>= 1;
	}
	return (count);
}
