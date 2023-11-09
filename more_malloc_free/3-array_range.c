#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
* *array_range - prints buffer in hexa
* @min: min value
* @max: max value
* Return: Nothing.
*/
int *array_range(int min, int max)
{
	int *arzu, i;

	if (min > max)
	{
		return (NULL);
	}
	arzu = malloc(sizeof(int) * (max - min + 1));
		if (arzu == NULL)
		{
			return (NULL);
		}
	for (i = 0; min <= max; i++)
	{
		arzu[i] = min;
		min++;
	}
	return (arzu);
}
