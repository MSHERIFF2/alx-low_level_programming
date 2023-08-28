#include "lists.h"

/**
 * listint_len - function that count the nodes
 * of elements in a linked list_t list
 * @h: pointer to the list
 *
 * Return: number of elements
 */
size_t listint_len(const listint_t *h)
{
	int count = 0;

	if (h == NULL)
		return (0);
	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
