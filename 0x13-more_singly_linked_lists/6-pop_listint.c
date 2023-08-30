#include "lists.h"

/**
 * pop_listint - function that deletes the
 * head of a listint_t linked list
 * @head: pointer to the pointer to the list
 * Return: 0
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int result;

	if (*head == 0)
		return (0);
	result = (*head)->n;
	temp = (*head);
	(*head) = (*head)->next;
	free(temp);
	return (result);
}

