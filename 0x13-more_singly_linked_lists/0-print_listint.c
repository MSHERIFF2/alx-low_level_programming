#include "lists.h"

/**
 * print_listint - function that prints all the element of
 * a list_t list
 * @h: pointer to list_t
 *
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h != 0)
	{
		if (h->n == 0)
			return(0);
		else
			printf("%d\n", h->n);
		count++;
		h = h->next;
	}
	return (count);
}
