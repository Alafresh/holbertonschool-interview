#include "slide_line.h"
/**
 * slideLeft - merges integers to the left
 * @line: points to an array of integers
 * @size: elements in array
 * Return: 1 otherwise 0
 */
int slideLeft(int *line, size_t size)
{
	int num1 = 0, num2 = 0;
	size_t l = 0, r;

	for (r = 0; r < size; r++)
	{
		if (line[r] != 0 && num1 == 0)
			num1 = line[r];
		else if (line[l] != 0 && num1 != 0)
			num2 = line[r];
		if (num1 != 0 && num2 != 0)
		{
			if (num1 == num2)
			{
				line[l++] = num1 + num2;
				num1 = 0;
				num2 = 0;
			}
			else
			{
				line[l++] = num1;
				num1 = num2;
				num2 = 0;
				if (r == size - 1)
					line[l++] = num1;
			}
		}
		else if (num1 != num2 && r == size - 1)
			line[l++] = num1;
	}
	for (r = l; r < size; r++)
		line[r] = 0;

	return (1);
}
/**
 * slideRight - merges integers to the right
 * @line: points to an array of integers
 * @size: elements in array
 * Return: 1 otherwise 0
 */
int slideRight(int *line, size_t size)
{
	int num1 = 0, num2 = 0;
	size_t r = size - 1, i;

	for (i = size - 1; i < size; i--)
	{
		if (line[i] != 0 && num1 == 0)
			num1 = line[i];
		else if (line[i] != 0 && num1 != 0)
			num2 = line[i];
		if (num1 != 0 && num2 != 0)
		{
			if (num1 == num2)
			{
				line[r--] = num1 + num2;
				num1 = 0;
				num2 = 0;
			}
			else
			{
				line[r--] = num1;
				num1 = num2;
				num2 = 0;
				if (i == 0)
					line[r--] = num1;
			}
		}
		else if (num1 != num2 && i == 0)
			line[r--] = num1;
	}
	for (i = 0; i < r + 1; i++)
		line[i] = 0;

	return (1);
}
/**
 * slide_line - slides and merges an array of integers
 * @line: points to an array of integers
 * @size: Number of elements in array
 * @direction: SLIDE_LEFT or SLIDE_RIGHT
 * Return: 1 otherwise 0
 */
int slide_line(int *line, size_t size, int direction)
{

	if (direction != SLIDE_LEFT && direction != SLIDE_RIGHT)
		return (0);
	if (direction == SLIDE_LEFT)
		return (slideLeft(line, size));
	return (slideRight(line, size));
}
