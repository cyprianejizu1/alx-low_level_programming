#include "main.h"
#include <stdlib.h>

/**
 * *_strdup - returns a pointer to a newly allocated space with copy of arguement
 * @str: string to copy
 * Return: pointer to array or NULL
 **/

char *_strdup(char *str)
{
	char *depulicate;
	unsigned int size = 0, index;

	if (str == NULL)
		return (NULL);

	for (index = 0; str[index] != '\0'; index++)
		size++;




}
