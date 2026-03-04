#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * **alloc_grid - do the code
 * @width: int
 * @height: int
 * Return: Nothing.
 */

int **alloc_grid(int width, int height)
{

int **grid;
int x, y;

// checks if width or height are <= 0
if (width <= 0 || height <= 0)
{
return (NULL);
}

// Allocates memory for the rows
grid = malloc(sizeof(int *) * height);
if (grid == NULL)
{
return (NULL);
}


for (x = 0; x < height; x++)
{

//Allocates memory for each column in the row
grid[x] = malloc(sizeof(int) * width);
if (grid[x] == NULL)
{

//Free's previously allocated rows when it fails
for  (y = 0; y < x; y++)
{
free(grid[y]);
}
free(grid);
return (NULL);
}

// when rows are created everything in the grid is set to 0
for (y = 0; y < width; y++)
{
grid[x][y] = 0;
}
}

return (grid);
}
