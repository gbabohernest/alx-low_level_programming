#!/usr/bin/python3
"""This module defines a function that
return the perimeter of an island
"""


def island_perimeter(grid):
    """Calculate the perimeter of an island surrounded by water.

    This function takes a 2D grid as input, where 0 represents water cells and
    1 represents land cells. It calculates the perimeter of the island
    by counting land cells and neighboring land cells, then subtracting the
    number of neighboring land cells from the total land cells and multiplying
    the result by 4.

    Args:
    grid (list of list of int): A rectangular grid representing the island.

    Returns:
    int: The perimeter of the island.
    """
    water = 0
    land = 1
    land_count = 0
    neighbors = 0

    for y in range(len(grid)):
        for x in range(len(grid[0])):
            if grid[y][x] == land:
                land_count += 1
                if y > 0 and grid[y - 1][x] == land:
                    neighbors += 1
                if y < len(grid) - 1 and grid[y + 1][x] == land:
                    neighbors += 1
                if x > 0 and grid[y][x - 1] == land:
                    neighbors += 1
                if x < len(grid[0]) - 1 and grid[y][x + 1] == land:
                    neighbors += 1

    perimeter = 4 * land_count - neighbors
    return perimeter
