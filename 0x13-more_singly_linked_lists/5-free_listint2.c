#include "lists.h"
/**
 * free_listint2 - frees a list
 * @head: pointer to start the list
 */
void free_listint2(listint_t **head)
{
	listint_t *current = *head;
	listint_t *tempp;

	while (current == NULL)
	{
		current = tempp;
		current = current->next;
		free(tempp);
	}
	*head = NULL;
}
