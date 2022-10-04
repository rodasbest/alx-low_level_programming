#include "main.h"

/**
 * alloc_grid - creates a 2 dimensional array of integers.
 *
 * @width: integer describing width of 2-D array
 * @height: integer describing height of 2-D array
 *
 * Return: pointer to 2-D array
 */

int **alloc_grid(int width, int height)
{
	int **twoDarray;
	int width_index, height_index;

	if (width <= 0 || height <= 0)
		return (NULL);

	twoDarray = malloc(sizeof(int *) * height);

	if (twoDarray == NULL)
		return (NULL);

	for (height_index = 0; height_index < height; height_index++)
	{
		twoDarray[height_index] = malloc(sizeof(int) * width);

		if (twoDarray[height_index] == NULL)
		{
			for (; height_index >= 0; height_index--)
				free(twoDarray[height_index]);

			free(twoDarray);
			return (NULL);
		}
	}

	for (height_index = 0; height_index < height; height_index++)
	{
		for (width_index = 0; width_index < width; width_index++)
			twoDarray[height_index][width_index] = 0;
	}

	return (twoDarray);
}
