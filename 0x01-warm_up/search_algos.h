#ifndef _SEARCH_ALGOS_H_
#define _SEARCH_ALGOS_H_
#include <stdio.h>


/**
 * binary_search - search for value in given array
 * print_array - print sub array from given array
 */
int binary_search(int *array, size_t size, int value);
void print_array(size_t left, size_t right, int *array);

#endif /* _SEARCH_ALGOS_H_ */
