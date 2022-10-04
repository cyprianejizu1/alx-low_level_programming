#include "main.h"
#include <stdlib.h>

/**
 * *_strdup - returns a pointer to a newly allocated space with copy of arg
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

	depulicate = malloc(sizeof(char) * (size + 1));

	if (depulicate == NULL)
		return (NULL);
	for (index = 0; index < size; index++)
		depulicate[index] = str[index];

	depulicate[size] = '\0';

	return (depulicate);
}
