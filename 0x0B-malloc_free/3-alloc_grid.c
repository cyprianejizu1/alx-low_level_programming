#include "main.h"
#inlude <stdlib.h>

/**
 * alloc_grid - Returns a pointer to a 2-dimensional array of integers
 * @width: The width of the 2-dimensional array.
 * @height: The height of the 2-dimensional array.
 *
 * Return: If width <= 0, height <= 0, or the function fails - NULL
 **/

int **alloc_grid(int width, int height)
{
	int **twodimensional;
	int hgt_index, wid_index;

