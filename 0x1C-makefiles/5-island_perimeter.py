#!/usr/bin/python3
"""modle for perimter of island
"""
def island_perimeter(grid):
    """Function that returns the parameter of the island
    Arg:
        grid: list of integers
    """
    ret = 0
    for y, row in enumerate(grid):
        for x, cell in enumerate(row):
            if cell == 1:
                if y == 0 or grid[y - 1][x] == 0:
                    ret += 1
                if y == len(grid) - 1 or grid[y + 1][x] == 0:
                    ret += 1
                if x == 0 or grid[y][x - 1] == 0:
                    ret += 1
                if x ==len(row) - 1 or grid[y][x + 1] == 0:
                    ret += 1
    return ret
