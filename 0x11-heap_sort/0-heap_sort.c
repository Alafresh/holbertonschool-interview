#include "sort.h"


/**
 * heap_sort - sorts an array of integers in ascending order using the Heapsort
 * @array: array of numbers
 * @size: Size of the array
 * Return: 0
 */
void heap_sort(int *array, size_t size)
{
	size_t len = size, raiz, tmp;
	ssize_t ult, parent;
	int buff;

	if (size < 2)
		return;
	while (len > 1)
	{
		ult = size - 1;
		parent = (ult - 1) / 2;
		while (parent >= 0)
		{
			parent--;
			raiz = parent;
			while ((2 * raiz + 1) < len)
			{
				tmp = raiz;
				if (array[(2 * raiz + 1)] > array[raiz])
					tmp = (2 * raiz + 1);
				if (2 * raiz + 2 < len && array[2 * raiz + 2] > array[tmp])
					tmp = 2 * raiz + 2;
				if (tmp == raiz)
					break;
				buff = array[raiz];
				array[raiz] = array[tmp];
				array[tmp] = buff;
				print_array(array, size);
				raiz = tmp;
			}
		}
		buff = array[0];
		array[0] = array[len - 1];
		array[len - 1] = buff;
		print_array(array, size);
		len--;
	}
}
