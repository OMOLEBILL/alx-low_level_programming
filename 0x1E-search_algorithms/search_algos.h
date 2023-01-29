#ifndef SEARCH_ALGOS
#define SEARCH_ALGOS
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int linear_search(int *array, size_t size, int value);
void print_array(int *array, size_t low, size_t high);
int binary_search(int *array, size_t size, int value);

#endif
