#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

listint_t *insert_node(listint_t **head, int number)
{
    listint_t *node;
    listint_t *current;

    if (head == NULL)
        return (NULL);
    current = (*head);
    node = malloc(sizeof(listint_t));
    if (node == NULL)
        return (NULL);
    while (current != NULL)
    {
        if (current->next->n < number)
            current =current->next;
        else
        {
            node->n = number;
            node->next = current->next;
            current->next = node;
            return (node);
        }
    }
return (NULL);
}