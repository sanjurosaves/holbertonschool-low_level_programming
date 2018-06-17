#!/usr/bin/python3
""" island perimeter problem """


def island_perimeter(grid):
    """ determines island perimeter """
    overall_perim = 0
    x = 0

    for row in grid:
        for y in range(len(row)):
            if row[y] == 1:
                overall_perim += get_cell_perim_val(x, y, grid)
        x += 1

    return overall_perim


def get_cell_perim_val(row, col, grid):
    """ determines perimeter value of individual cell """
    cpv = 0
    coordinates = [(row, col-1), (row, col+1), (row-1, col), (row+1, col)]

    for e in coordinates:
        try:
            if (grid[e[0]][e[1]] == 0) or ((e[0] < 0) or (e[1] < 0)):
                cpv += 1
        except:
            cpv += 1

    return(cpv)
