#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - prints numbers, followed by a new line
 *
 * @separator: the delimiter
 * @n: the number of arguments to print
 *
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	va_list nums;
	int number;

	va_start(nums, n);

	for (; i < n; i++)
	{
		number = va_arg(nums, int);
		if (!separator)
			printf("%d", number);
		else
		{
			if (i == 0)
				printf("%d", number);
			else
				printf("%s%d", separator, number);
		}
	}
	printf("\n");
	va_end(nums);
}
