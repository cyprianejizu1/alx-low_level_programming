#include "main.h"

/**
 * malloc_checked - allocates memory using malloc.
 * @b: the number of bytes to be allocated
 *
 * Return: a pointer to the allocated memory
 **/

void *malloc_checked(unsigned int b)
{
	void *prt

	prt = malloc(b);
	if (prt == NULL)
		exit(98);
	return (prt);
}
