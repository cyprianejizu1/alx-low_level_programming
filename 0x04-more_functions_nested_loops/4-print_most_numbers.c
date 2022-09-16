#include "main.h"

/**
 * print_most_numbers - this print numbers from 0 to 9 expect 2 and 4
 *
 * Return: void
 */

void print_most_numbers(void)
{
	int c = 0;

	while (c < 9)
	{
		if (!(c == '2' || c == '4'))
		{
			_putchar(c);
		c++;
		}
	}
	_putchar('\n');
}
