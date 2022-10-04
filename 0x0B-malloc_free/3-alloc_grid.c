#include "main.h"
#include <stdlib.h>

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

	if (width <= 0 || height <= 0)
		return (NULL);

	twodimensional = malloc(sizeof(int *) * height);

	if (twodimensional == NULL)
		return (NULL);

	for (hgt_index = 0; hgt_index < height; hgt_index++)
	{
		twodimensional[hgt_index] = malloc(sizeof(int) * width);

		if (twodimensional[hgt_index] == NULL)
		{
			for (; hgt_index >= 0; hgt_index--)
				free(twodimensional[hgt_index]);

			free(twodimensional);
			return (NULL);
		}
	}

	for (hgt_index = 0; hgt_index < height; hgt_index++)
	{
		for (wid_index = 0; wid_index < width; wid_index++)
			twodimensional[hgt_index][wid_index] = 0;
	}

	return (twodimensional);
}
