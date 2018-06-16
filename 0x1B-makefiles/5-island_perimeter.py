#!/usr/bin/python3
""" island perimeter problem """


def island_perimeter(grid):
    """ determines island perimeter """
    overall_perim = 0
    y = 0

    for row in grid:
        for i in range(len(row)):
            if row[i] == 1:
                overall_perim += get_cell_perim_val(y, i, grid)
        y += 1
    return overall_perim


def get_cell_perim_val(row, col, grid):
    """ determines perimeter value of individual cell """
    cpv = 0

    try:
        if (grid[row][col+1] == 0):
            cpv += 1
    except:
        cpv += 1

    try:
        if (grid[row][col-1] == 0):
            cpv += 1
    except:
        cpv += 1

    try:
        if (grid[(row+1)][col] == 0):
            cpv += 1
    except:
        cpv += 1

    try:
        if (grid[(row+1)][col] == 0):
            cpv += 1
    except:
        cpv += 1

    return(cpv)
