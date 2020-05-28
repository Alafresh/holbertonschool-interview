#include "lists.h"


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

/**
* is_palindrome - checks if a singly linked list is a palindrome
* @head: double pointer to head
* Return: 1 or 0
*/

int is_palindrome(listint_t **head)
{
        if (head == NULL)
                return (1);

        listint_t *current = (*head);
        int size = getCount(*head);
        int tmp[size];
        int i = 0;

        while (current != NULL)
        {
                tmp[i] = current->n;
                current = current->next;
                i++;
        }

        int length = sizeof(tmp) / sizeof(tmp[0]);
        int j;

        for (j = 0; j < length - 1; j++)
        {
                if (tmp[i - 1] != tmp[j])
                        return (0);
                i--;
        }
        return (1);
}
