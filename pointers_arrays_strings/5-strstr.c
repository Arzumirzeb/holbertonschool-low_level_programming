#include "main.h"
#include <stdio.h>

/**
 * *_strstr - check the code
 * @haystack: longer string
 * @needle: substring
 * Return: Always 0.
 */
char *_strstr(char *haystack, char *needle)
{
	int i, a = 0;

	while (*(needle + a) != '\0')
	{
		a++;
	}

	while (*haystack)
	{
		for (i = 0; *(needle + i) != '\0'; i++)
		{
			if (*(haystack + i) != *(needle + i))
				break;
		}
		if (i == a)
			return (haystack);
		haystack++;
	}
	return (NULL);
}
