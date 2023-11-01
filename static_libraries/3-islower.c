#include "main.h"
/**
 * _islower - Entry point
 * @c: variable
 * Return: Always 0 (Success)
 */
int _islower(int c)
{
	if (c >= 97 && c <= 123)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}


