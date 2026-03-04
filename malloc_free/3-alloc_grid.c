#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *str_concat - do the code
 * @s1: int
 * @s2: char
 * Return: Nothing.
 */

int **alloc_grid(int width, int height)
{

int **grid;
int x, y;

if (width <= 0 || height <= 0)
{
return (NULL);
}

grid = malloc(sizeof(int *) * height);
if (grid == NULL)
{
return (NULL);
}

for (y = 0; y < height; y++)
{
grid[x] = malloc(sizeof(int) * width);

if (grid[x] == NULL)
{

for  (; x >= 0; x--)
{
free(grid[x]);
}

free(grid);
return (NULL);
}

for (y = 0; y < width; y++)
{
grid[x][y] = 0;
}
}

return (grid);
}
