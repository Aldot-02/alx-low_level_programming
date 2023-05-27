#!/usr/bin/python3
"""Function for determining the perimeter of an island."""


def island_perimeter(grid):
    """Return the perimiter of an island.
    The grid is represented by 0 for water and 1 for land.
    Args:
        grid (list): A nested list of integers representing an island.
    Returns:
        The perimeter of the island defined in the grid.
    """
    width = len(grid[0])
    height = len(grid)
    edges = 0
    size = 0

    for i in range(height):
        for j in range(width):
            if grid[i][j] == 1:
                size += 1
                if (j > 0 and grid[i][j - 1] == 1):
                    edges += 1
                if (i > 0 and grid[i - 1][j] == 1):
                    edges += 1
    return size * 4 - edges * 2
