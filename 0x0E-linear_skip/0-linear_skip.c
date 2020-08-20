#include "search.h"

/**
 * linear_skip - looking for a specific value in a singly linked list
 *
 * @list: is a pointer to the head
 * @value: is the value to search for
 * Return: first node where value is located
 */

skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *skip = NULL;
	skiplist_t *hold = NULL;

	if (!list)
		return (NULL);
	skip = list;
	while (skip->express)
	{
		printf("Value checked at index [%lu] = [%i]\n",
		       (skip->express)->index, (skip->express)->n);
		if ((skip->express)->n >= value)
		{
			printf("Value found between indexes [%lu] and [%lu]\n",
			       skip->index, (skip->express)->index);
			break;
		}
		if ((skip->express)->express == NULL)
		{
			skip = skip->express;
			hold = skip;
			while (hold->next)
				hold = hold->next;
			printf("Value found between indexes [%lu] and [%lu]\n",
			       skip->index, hold->index);
			break;
		}
		skip = skip->express;
	}
	while (skip->next)
	{
		printf("Value checked at index [%lu] = [%i]\n",
		       skip->index, skip->n);
		if (skip->n == value)
			return (skip);
		if (skip->n > value)
			return (NULL);
		skip = skip->next;
	}
	printf("Value checked at index [%lu] = [%i]\n", skip->index, skip->n);
	return (NULL);
}
