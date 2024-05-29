#!/usr/bin/python3
"""modle for perimter of island
"""
def island_perimeter(grid):
    """Function that returns the parameter of the island
    Arg:
        grid: list of integers
    """
    width = len(grid[0])
    height = len(grid)
    e = 0
    s = 0
    for i in range(height):
        for j in range(width):
            if grid[i][j] == 1:
                s += 1
            if (j > 0 and grid[i][j - 1] == 1):
                e += 1
                if (i > 0 and grid[i - 1][j] == 1):
                    e += 1
    return s * 4 - e * 2
