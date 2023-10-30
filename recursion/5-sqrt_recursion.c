#include "main.h"
#include <stdio.h>

/**
 * _sqrt_recursion - check the code
 * @n: square
 * Return: Always 0.
 */
int _sqrt_recursion(int n)
{
	if (n == 0)
	{
		return (0);
	}
	if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (_sqrt(n, 1));
	}
}
/**
 * _sqrt - check the code
 * @x: square
 * @y: variablr
 * Return: Always 0.
 */
int _sqrt(int y, int x)
{
	if (x * x == y)
	{
		return (x);
	}
	if (x * x > y)
	{
		return (-1);
	}
	else
	{
		return (_sqrt(y, x + 1));
	}
}
