#include "lists.h"

/**
 * print_list - function that prints all the element of
 * a list_t list
 * @h: pointer to list_t
 *
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[%lu] (nil)\n", h->len);
		else
			printf("[%lu] %s\n", h->len, h->str);
		count += 1;
		h = h->next;
	}
	return (count);
}
