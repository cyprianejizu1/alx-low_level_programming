#include "function_pointers.h"

/**
 * int_index - search for an integer
 *
 * @array: array to a pointer
 * @size: the number of elements in the array
 * @cmp: function to compare and return match if it exits
 * Return: index of first match or -1 if not match or fail
 **/

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp && size > 0)
		for (i = 0; i < size; i++)
			if (cmp(array[i]))
				return (1);
	return (-1);
}
