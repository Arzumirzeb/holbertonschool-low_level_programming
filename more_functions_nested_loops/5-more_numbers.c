#include "main.h"
#include <stdio.h>

/**
 * more_numbers - check the code.
 *
 * Return: 0
 */
void more_numbers(void)
{
	int n, a;

	for (n = 0; n < 10; n++)
	{
		for (a = 0; a <= 14; a++)
		{
			if (a > 10)
			{
				_putchar(a / 10 + '0');
			}
			_putchar(a % 10 + '0');
		}
		_putchar('\n');
	}

}
