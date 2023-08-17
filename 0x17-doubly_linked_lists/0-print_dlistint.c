#include <stdio.h>
#include "lists.h"

/**
 * print_dlistint - Prints all elements of a dlistint_t list.
 * @h: Pointer to the head of the list.
 * Return: Number of nodes in the list.
 */
size_t print_dlistint(const dlistint_t *h)
{
    size_t node_count = 0;  /* Counter for the number of nodes */

    while (h != NULL)
    {
        printf("%d\n", h->n);
        h = h->next;  /* Move to the next node */
        node_count++;  /* Increment the node count */
    }

    return (node_count);
