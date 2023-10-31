#include "main.h"

/**
 * alloc_grid -  function that returns a pointer to a 2 dimensional array
 * @width: int variable 1
 * @height: int variable 2
 * Return: int value
 */
int **alloc_grid(int width, int height)
{
	unsigned int i, j;
	int **mat;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	mat = (int **)malloc(height * sizeof(int *));
	if (mat == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		mat[i] = (int *)malloc(width * sizeof(int));
		if (mat[i] == NULL)
		{
			for (j = 0; j < i; j++)
			{
				free(mat[j]);
			}
			free(mat);
			return (NULL);
		}
		for (j = 0; j < width; j++)
		{
			mat[i][j] = 0;
		}
	}
	return (mat);
}
