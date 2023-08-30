#include "lists.h"

/**
 * get_nodeint_at_index - function that returns the
 * nth node of a listint_t
 * @head: pointer to the list
 * @index: index of the list
 * Return: the nth node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int Index = 0;

	while (head != NULL)
	{
		if (Index == index)
			return (head);
		Index++;
		head = head->next;
	}
	return (NULL);
}
