#include "lists.h"

/**
 * free_listint2 - function that frees a listint_t list
 * @head: pointer to the list
 * Return: nothing
 */
void free_listint2(listint_t *head)
{
	if (head == NULL)
		return;
	while ((*head) != NULL)
	{
		listint_t *tmp;

		tmp = (*head);
		(*head) = (*head)->next;
		free(tmp);
	}
	(*head) = NULL;
}
