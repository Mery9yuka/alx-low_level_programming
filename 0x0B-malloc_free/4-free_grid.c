#include "main.h"
/**
 * free_grid - function that frees a 2 dimensional grid
 * @grid: grid of memory
 * @height: int of height
 * Return : 0
 */

void free_grid(int **grid, int height)
{
	int a;

	a = 0;
	while (a < height)
	{
		free(grid[a]);
		a++;
	}
	free(grid);
}
