#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_all - print arguments
 * @format : format
 *
 * Return: Always 0.
 */
void print_all(const char * const format, ...)
{
	int i;
	va_list args;
	char *s;

	va_start(args, format);

	while (format && format[i])
	{
		switch (format[i++])
		{
			case 'c':
				printf("%c", va_arg(args, int));
				break;
			case 'i':
				printf("%i", va_arg(args, int));
				break;
			case 'f':
				printf("%f", va_arg(args, double));
				break;
			case 's':
				s = va_arg(args, char*);
				if (!s)
				{
					s = "(nil)";
				}
				printf("%s", s);
				break;
			default:
				continue;
		}
		if (format[i])
		{
			printf(", ");
		}
	}
	printf("\n");
	va_end(args);
}
