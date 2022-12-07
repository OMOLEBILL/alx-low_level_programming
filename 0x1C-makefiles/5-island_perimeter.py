#!/usr/bin/python3
""" module to find the perimeter of a grid """


def island_perimeter(grid):
    """ function that return te perimeter of grid"""
    a = [i for x in grid for i in x if i == 1]
    return ((2*(len(a))) + 2)
