#!/usr/bin/python3
"""
Defining a func that returns the perimeter of the island
descricbed in grid
"""

def island_perimeter(grid):
    """
    Args:
        @grid: list if int 
			0 - water zone
			1 -  land zone
			one cell is sq with side len 1
			grid cells are conected horizontally/vertically
			grid is rectangular, width and height dont exceed 100
    return
		perimeter of island
    """

    sq = 0
    width = len(grid[0])
    length = len(grid)

    grid.insert(0, [0 for i in range(width)])
    grid.append([0 for i in range(width)])
    for row in range(length + 2):
        grid[row].append(0)
        grid[row].insert(0, 0)
    for row in range(1, length + 1):
        for col in range(1, width + 1):
            if grid[row][col] == 1:
                if grid[row][col - 1] == 0:
                    sq += 1
                if grid[row][col + 1] == 0:
                    sq += 1
                if grid[row - 1][col] == 0:
                    sq += 1
                if grid[row + 1][col] == 0:
                    sq += 1
    return sq
