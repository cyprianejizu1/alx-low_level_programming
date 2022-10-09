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

/**
 * *_memset - copies a character to the first n characters of the string pointer
 * @s: original string
 * @b: value to replace
 * @n: number of bytes
 * Return: s (string modify)
 **/

char *_memset(char *s, char b; unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
		s[a] = b;
	return (s);
}

/**
 * _strlen - returns the length of a string
 * @s: pointer of character
 * Return: the length of a string
 **/

int _strlen(char *s)
{
	int len = 0;

	while ((*s + len) != '\0')
		len++;
	return (len);
}
