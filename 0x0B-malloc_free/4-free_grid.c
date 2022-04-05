#include <stdlib.h>
<<<<<<< HEAD
<<<<<<< HEAD
#include "main.h"
=======

>>>>>>> 8657fca78602de11eb524c9fb9bb9db3ad4320f1
=======

>>>>>>> 8657fca78602de11eb524c9fb9bb9db3ad4320f1
/**
 * free_grid - Free a 2 dimensional grid previously created by your
 * alloc_grid function
 *
 * @grid: The grid we'll free up
 * @height: The number of rows in the grid
 *
 * Return: Nothing
 */

void free_grid(int **grid, int height)
{
<<<<<<< HEAD
<<<<<<< HEAD
int i;
for (i = 0; i < height; i++)
=======
=======
>>>>>>> 8657fca78602de11eb524c9fb9bb9db3ad4320f1
	int i = 0;

	while (i < height)
	{
<<<<<<< HEAD
>>>>>>> 8657fca78602de11eb524c9fb9bb9db3ad4320f1
=======
>>>>>>> 8657fca78602de11eb524c9fb9bb9db3ad4320f1
		free(grid[i]);
		i++;
	}
	free(grid);
}
