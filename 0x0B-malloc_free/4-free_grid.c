#include "main.h"
#include <stdlib.h>
/**
 * free_grid - free the memory allocated
 * @grid: the array of integers
 * @height: height of the array
 * Return: void
 **/
void free_grid(int **grid, int height)
{
	if (grid != NULL && height != 0)
	{
		for (; height >= 0; height--)
			free(grid[height]);
		free(grid);
	}
}
