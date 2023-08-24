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
	int count = 0;

	if (h->str == NULL)
		printf("[%u] (nil)\n", h->len);
	while (h != NULL)
	{
		printf("[%u] %s\n", h->len, h->str);
		count += 1;
		h = h->next;
	}
	return (count);
}
