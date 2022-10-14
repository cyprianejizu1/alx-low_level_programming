#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <string.h>
/**
 * print_all - prints anything
 *
 * @format: the format to print
 *
 * Return: void
 */

void print_all(const char * const format, ...)
{
	unsigned int i = 0, len;
	va_list args;
	char *delimiter = "", *string;

	va_start(args, format);

	len = strlen(format);

	if (format)
	{
		while (format[i] && i < len)
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c",  delimiter, va_arg(args, int));
					break;
				case 'i':
					printf("%s%d", delimiter, va_arg(args, int));
					break;
				case 'f':
					printf("%s%f", delimiter, va_arg(args, double));
					break;
				case 's':
					string =  va_arg(args, char *);
					if (!string)
						printf("(nil)");
					printf("%s%s", delimiter, string);
					break;
				default:
					i++;
					continue;
			}
			delimiter = ", ";
			i++;
		}
	}
	printf("\n");
	va_end(args);
}
