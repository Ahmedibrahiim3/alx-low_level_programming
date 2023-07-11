#include "main.h"

/**
 * alloc_grid - function that returns a pointer to a 2 dimensional array
 * @width: intger
 * @height: intger
 * Return: two dimensional array
*/

int **alloc_grid(int width, int height)
{
	int **rc, i, c;

	rc = malloc(sizeof(*rc) * height);

	if (width <= 0 || height <= 0 || rc == 0)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < height; i++)
		{
			rc[i] = malloc(sizeof(**rc) * width);
			if (rc[i] == 0)
			{
				while (i--)
					free(rc[i]);
				free(rc);
				return (NULL);
			}

			for (c = 0; c < width; c++)
				rc[i][c] = 0;
		}
	}

	return (rc);
}
