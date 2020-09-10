#include "search_algos.h"

/**
 * print_array - prints an array
 *
 * @array: array
 * @left: node left
 * @right: node right
 *
 * Return: nothing. void
 */

void print_array(int *array, size_t left, size_t right)
{
	printf("Searching in array: ");
	while (left <= right)
	{
		printf("%i", array[left]);
		if (left < right)
			printf(", ");
		left++;
	}
	printf("\n");
}

/**
 * binary_search - binary search algorithm
 *
 * @array: array
 * @left: left
 * @right: right
 * @value: value to search for
 *
 * Return: Index or -1
 */

int binary_search(int *array, size_t left, size_t right, int value)
{
	int mid;

	if (left < right)
	{
		print_array(array, left, right);
		mid = left + (right - left) / 2;
		if (array[mid] >= value)
			return (binary_search(array, left, mid, value));
		return (binary_search(array, mid + 1, right, value));
	}
	if (array[left] == value)
		return (left);
	print_array(array, left, right);
	return (-1);
}
/**
* advanced_binary - searches for a value in a sorted array of integers
 *
 * @array: pointer to element of the array
 * @size: number of elements in array
 * @value: value to search for
 *
 * Return: -1 or value
 */

int advanced_binary(int *array, size_t size, int value)
{
	int result;

	if (!array || size == 0)
		return (-1);
	result = binary_search(array, 0, size - 1, value);
	return (result);
}
