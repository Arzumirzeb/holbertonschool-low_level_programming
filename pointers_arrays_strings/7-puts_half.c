#include "main.h"

/**
 * puts_half - check the code
 * @str: pointer
 * Return: Always 0.
 */
void puts_half(char *str)
{
	int a, n;

	for (a = 0; *(str + a) != '\0'; a++)
	{
		if (a % 2 == 0)
		{
			n = a / 2;
	       	}
	        else
		{
			n = (a + 1) / 2;
		}
	}
		while (*(str + n) != 0)
		{
			_putchar(*(str + n));
			n++;
		}
	_putchar('\n');
}
