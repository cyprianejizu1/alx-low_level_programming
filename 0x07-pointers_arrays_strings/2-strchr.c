#include "main.h"

/**
* strchr - main function
*@s: Pointer to the string
*@c: Character to locate in the string4
*
*Description: This function locates a character in a string
*
*Return: Pointer to the first occurance of the c if it's there or NULL otherwise
*/

char *_strchr(char *s, char c)
{
	do {
		if (*s == c)
		{
			return (s);
		}
		s++
	} while (*s++);
	return (NULL);


}
