#ifndef SEARCH_ALGOS
#define SEARCH_ALGOS

#define MIN(x, y) ((x < y) ? x : y)

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int linear_search(int *, size_t, int);
int binary_search(int *, size_t, int);
void print_array(int *, int, int);
int jump_search(int *, size_t, int);


#endif
