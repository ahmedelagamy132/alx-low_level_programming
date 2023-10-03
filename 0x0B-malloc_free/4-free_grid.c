#include <stdlib.h>
#include "main.h"
/**
 * free_grid - grid freea
 * @grid: grid
 * @height: height
 */
void free_grid(int **grid, int height)
{
int loop = 0;

while (loop < height)
{
free(grid[loop]);
loop++;
}
free(grid);
}
