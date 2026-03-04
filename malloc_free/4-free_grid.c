#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - do the code
 * @grid: int
 * @height: int
 * Return: Nothing.
 */

void free_grid(int **grid, int height)
{

int x;

if (grid == NULL || height <= 0)
{
return;
}

for (x = 0; x < height; x++)
{
free(grid[x]);
}

free(grid);
}
