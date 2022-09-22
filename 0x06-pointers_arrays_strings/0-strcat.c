#include "main.h"

/**
 * *_strcat - concatenates @src to @dest
 * @src: the source string to append to @dest
 * @dest: the destiation string to be concatenated upon
 * Return:pointer to the resulting string
 */

char *_strcat(char *dest, char *src)
{
	int index;
	int dest_len;

	while (dest[index++])
		dest_len++;

	for (index = 0; src[index]; index++)
		dest[dest_len + index] = src[index];
	dest[dest_len + index] = '\0';

	return (dest);
}
