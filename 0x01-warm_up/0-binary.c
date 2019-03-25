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
 * binary_search - search for value in sorted array using binary search
 * @array: array to search in
 * @size: the size of the array
 * @value: value to search for in the array
 * Return: index of value if found, else -1
 */
int binary_search(int *array, size_t size, int value)
{
	size_t left = 0, right = size - 1, mid;

	if (array == NULL)
		return (-1);

	while (left <= right)
	{
		mid = (left + right) / 2;
		if (array[mid] < value)
		{
			print_array(left, right, array);
			left = mid + 1;
		}
		else if (array[mid] > value)
		{
			print_array(left, right, array);
			right = mid - 1;
		}
		else
			return (mid);
	}
	return (-1);
}
