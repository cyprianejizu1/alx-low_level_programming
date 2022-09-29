#include "main.h"

/**
* _strlen_recursion - prints a function that return the length of a stng
* @s: pointer to string
* Return: nothing
*/

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}
