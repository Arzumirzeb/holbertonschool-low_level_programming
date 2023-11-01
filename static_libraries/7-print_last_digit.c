#include "main.h"

/**
 * print_last_digit - print last digit of number
 * @n: variable
 * Return: Last digit.
 */
int print_last_digit(int n)
{
	n = n % 10;

	if (n >= 0)
	{
		_putchar(n + '0');
		return (n);
	}
	else
	{
		_putchar((-1 * n) + '0');
		return (n = -1 * n);
	}
}
