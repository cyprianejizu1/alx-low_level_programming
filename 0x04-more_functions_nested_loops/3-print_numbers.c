#include "main.h"

/**
 * print_numbers - this will print numbers from 0 to 9 without standard functions
 *
 * Return: void
 */

void print_numbers(void)
{
	int c = 0;

	while (c < 9)
	{
		_putchar(c);
		c++;
	}
	_putchar('\n')

}
