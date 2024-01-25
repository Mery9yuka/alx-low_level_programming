#!/usr/bin/python3
"""Module defining island perimeter
"""
 
def island_perimeter(grid):
    """A function that returns the perimeter of the island showed in grid"""

    is_perimeter = 0

    for row in range(len(grid)):
        for column in range(len(grid[0])):
            if grid[row][column] == 1:
                is_perimeter += 4
                if row > 0 and grid[row - 1][column] == 1:
                    is_perimeter -= 2
                if column > 0 and grid[row][column - 1] == 1:
                    is_perimeter -= 2

    return is_perimeter
