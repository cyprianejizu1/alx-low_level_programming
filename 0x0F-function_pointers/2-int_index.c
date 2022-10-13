#include "function_pointers.h"

/**
 * int_index - search for an integer
 *
 * @array: array to a pointer
 * @size: the number of elements in the array
 * @cmp: function to compare and return match if it exits
 * Return: first element index on success or return -1
 **/

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp && size > 0)
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}
