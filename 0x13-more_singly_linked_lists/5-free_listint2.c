#include "lists.h"

/**
 * free_listint2 - function that frees a listint_t list
 * @head: pointer to the list
 * Return: nothing
 */
void free_listint2(listint_t *head)
{
	listint_t *tmp;

	tmp = head;
	while (tmp != NULL)
	{
		tmp = tmp->next;
		free(tmp);
	}
	head->next = NULL;
}
