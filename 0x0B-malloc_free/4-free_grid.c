#include <stdlib.h>

/**
 * free_grid - frees a 2 dimensional grid previously
 * created by alloc_grid function.
 * @grid: multidimensional grid
 * @height: height of grid
 */
void free_grid(int **grid, int height)
{
	int x;

	for (x = 0; x < height; x++)
		free(grid[x]);
	free(grid);
}
