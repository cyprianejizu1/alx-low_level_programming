#include "main.h"
#include <stdlib.h>

/**
* str_concat - concatenates two strings.
* @s1: The string to be concatenated upon.
* @s2: The string to be concatenated to s1.
*
* Return: pointer the strings.
**/

char *str_concat(char *s1, char *s2)
{
	char *concat_str;
	int index, concat_index = 0, size = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (index = 0; s1[index] || s2[index]; index++)
		size++;

	concat_str = malloc(sizeof(char) * size);

	if (concat_str == NULL)
		return (NULL);

	for (index = 0; s1[index]; index++)
		concat_str[concat_index++] = s1[index];

	for (index = 0; s2[index]; index++)
		concat_str[concat_index++] = s2[index];

	return (concat_str);

}