#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * sum_them_all - sums all its parameters
 *
 * @n: the number of arguments
 *
 * Return: the result
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list nums;
	unsigned int i = 0;
	int sum = 0;

	if (n == 0)
		return (0);

	va_start(nums, n);

	for (; i < n; i++)
	{
		sum += va_arg(nums, int);
	}

	va_end(nums);
	return (sum);
}
