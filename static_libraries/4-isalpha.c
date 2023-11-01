#include "main.h"
/**
 * _isalpha - Entry point
 * @c: variable
 * Return: Always 0 (Success)
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 123) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
