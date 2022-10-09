#include "main.h"

/**
 * _isNum - check if is a number
 * @num: string to check
 * Return: 1 is num, 0 not num
 **/

int _isNum(char *num)
{
	int a;

	for (a = 0; num[a] != '\0'; a++)
	{
		if (num[a] < '0' || num[a] > '9')
			return (0);
	}
	return (1);
}
