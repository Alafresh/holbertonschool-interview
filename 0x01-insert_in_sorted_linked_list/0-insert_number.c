#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

listint_t *insert_node(listint_t **head, int number)
{
    listint_t *node;
    listint_t *current;

    node = malloc(sizeof(listint_t));
    if (node == NULL)
        return (NULL);
    if ((*head) == NULL)
    {
        node->n = number;
        node->next = NULL;
        (*head) = node;
        return (node);
    }
    current = (*head);
    while (current != NULL)
    {
        if (current->next->n > number)
        {
            node->n = number;
            node->next = current->next;
            current->next = node;
            return (node);
        }
        if (current->next->next == NULL && current->next->n < number)
        {
            node->n = number;
            node->next = NULL;
            current->next->next = node;
            return (node);
        } 
        current =current->next;
    }
return (NULL);
}