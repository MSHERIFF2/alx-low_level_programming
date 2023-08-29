#include "lists.h"

/**
 * print_listint - function that prints all the element of
 * a listiint_t list
 * @h: pointer to listint_t
 *
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	unsigned int count = 0;

	if (h == NULL)
		return (0);
	while (h != NULL)
	{
		printf("%d\n", h->n);
		count += 1;
		h = h->next;
	}
	return (count);
}
