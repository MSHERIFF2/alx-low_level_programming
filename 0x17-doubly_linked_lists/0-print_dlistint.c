#include "lists.h"

/**
 * print_dlistint - function that print doubly linkedlist
 * @h: pointer to the head node
 *
 * Return: list of node
 */

size_t print_dlistint(const dlistint_t *h)
{
	int count;

	count = 0;
	if (h == NULL)
		return count;
	while (h->prev != NULL)
	{
		h = h-> prev;
	}
	while (h != NULL)
	{
		printf("%d\n", h->n);
		count++;
		h = h->next;
	}
	return (count);
}