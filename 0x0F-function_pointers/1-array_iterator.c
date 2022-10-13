#include "function_pointers.h"

/**
 * array_iterator - executes a function given as a parameter
 * on each element of an array
 *
 * @array: pointer to array
 * @size: the size of the array
 * @action: a pointer to the function to call for each
 * element of array
 *
 * Return: Nothing
 **/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array && size > 0 && action)
		for (i = 0; i < size; i++;
				action(array[i]);

}
