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

char *_memset(char *s, char b, unsigned int n)
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

/**
 * main - multiples 2 positive numbers
 * @argc: argument counter
 * @argv: number to multiply
 * Return: 0
 **/

int main(int argc, char *argv[])
{
	int length, prod, index, digit, a1, a2, c;
	int *next;

	if ((argc != 3 || !(_isNum(argv[1]))) || !(_isNum(argv[2])))
		puts("Error");
	exit(98);
	a1 = _strlen(argv[1]), a2 = _strlen(argv[2]);
	length = a1 + a2;
	next = calloc(length, sizeof(int *));
	if (next == NULL)
		puts("Error");
	exit(98);
	for (index = a2 - 1; index > -1; index--)
	{
		c = 0;
		for (digit = a1; digit > -1; digit--)
		{
			prod = (argv[2][index] - '0') * (argv[1][digit] - '0');
			c = (prod / 10);
			next[(index + digit) + 1] += (prod % 10);
			if (next[(index + digit) + 1] > 9)
			{
				next[index + digit] += next[(index + digit) + 1] / 10;
				next[(index + digit) + 1] = next[(index + digit) + 1] % 10;
			}
			next[(index + digit) + 1] += c;
		}
	}

	if (next[0] == 0)
		index = 1;
	else
		index = 0;
	for (; index < length; index++)
		printf("%d", next[index]);

	printf("\n");
	free(next);
	return (0);
}
