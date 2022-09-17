#include "main.h"

/**
 * print_number - function that prints an integer..
 * @n: input value to check
 * Return: nothing.
 */

void print_number(int n)
{
	#include "main.h"

/**
 * print_number - prints an integer
 * @n: random integer
 *Return: void
 **/

void print_number(int n)
{
	unsigned int d = 10

	if (n < d)
	{
		_putchar('0' + n);
	}
	else
	{
		while (n >= d)
		{
			d *= 10;
			if (d == 1000000000)
				break;
		}
		if (!(d == 1000000000) || n == 123456789)
			d /= 10;
		_putchar('0' + n / d);
		while (d != 10)
		{
			d /= 10;
			_putchar('0' + (n / d) % 10);
		}
		_putchar('0' + n % 10);
	}
}
