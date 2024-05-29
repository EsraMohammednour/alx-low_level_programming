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
    s = 0
    for i in range(height):
        for j in range(width):
            if grid[i][j] == 1:
                s += 4
            if (j > 0 and grid[i][j - 1] == 1):
                s -= 2
                if (i > 0 and grid[i - 1][j] == 1):
                    s -= 2
    return s
