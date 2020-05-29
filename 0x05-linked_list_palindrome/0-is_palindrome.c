#include "lists.h"

/**
* is_palindrome - checks if a singly linked list is a palindrome
* @head: double pointer to head
* Return: 1 or 0
*/

int is_palindrome(listint_t **head)
{

	listint_t *current;
	int tmp[99999];
	int j;
	int i;

	if (head == NULL)
		return (1);

	i = 0;
	current = (*head);
	while (current != NULL)
	{
		tmp[i] = current->n;
		current = current->next;
		i++;
	}

	for (j = 0; j < i - 1; j++)
	{
		if (tmp[i - 1] != tmp[j])
			return (0);
		i--;
	}
	return (1);
}

/**
* getCount - returns the length of a linked list
* @head: pointer to head
* Return: the length
*/

int getCount(listint_t *head)
{
	int count = 0;
	listint_t *current = head;

	while (current != NULL)
	{
		count++;
		current = current->next;
	}
	return (count);
}
