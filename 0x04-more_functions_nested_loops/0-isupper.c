#include "main.h"

/**
 * _isupper - function that checks for uppercase characcter.
 * @c: int type number
 * Return: 1 if c is uppercase, 0
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else if (c <= 'z')
	{
		return (0);
	}
}
