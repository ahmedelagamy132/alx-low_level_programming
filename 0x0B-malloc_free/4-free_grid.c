#include <stdlib.h>
#include "main.h"
/**
 * free_grid -dfbdgbgbdgv
 *
 *@grid: bgbkmgngfb
 *@height: dfmvlkdmdkfb
 * Return: fghfbnvb cv vb vb
 */
void free_grid(int **grid, int height)
{
int loop;

loop = 0;
while (loop < height)
{
free(grid[loop]);
loop++;
}
free(grid);
}
