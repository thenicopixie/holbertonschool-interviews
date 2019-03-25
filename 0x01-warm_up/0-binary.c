#include "search_algos.h"

/**
 * print_array - print message with given array
 * @left: the strting index of array to print
 * @right: the ending index of the array to print
 * @array: the complete array
 */
void print_array(size_t left, size_t right, int *array)
{
	size_t i;

	printf("Searching in array: ");
	for (i = left; i <= right; i++)
	{
		printf("%d", array[i]);
		if (i < right)
			printf(", ");
	}
	printf("\n");
}

/**
 * binary_recurse - function to search for value in sorted array
 * @array: array to search in
 * @l: start index of sub array
 * @r: end index of sub array
 * @value: value to search for
 * Return: index of found value or -1
 */
int binary_recurse(int *array, size_t l, size_t r, int value)
{
	size_t mid = (l + r) / 2;

	if (l > r)
		return (-1);
	print_array(l, r, array);
	if (array[mid] > value)
		return (binary_recurse(array, l, mid, value));
	else if (array[mid] < value)
		return (binary_recurse(array, mid + 1, r, value));
	else
		return (mid);
}

/**
 * binary_search - search for value in array, calls recursive helper function
 * @array: array to search in
 * @size: size of the array
 * @value: value to search for
 * Return: index of value or -1
 */
int binary_search(int *array, size_t size, int value)
{
	if (array == NULL)
		return (-1);

	return (binary_recurse(array, 0, size - 1, value));
}
