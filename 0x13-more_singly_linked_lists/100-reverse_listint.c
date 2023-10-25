#include "lists.h"
/**
 * reverse_listint - Reverses a listint_t linked list
 * @head: Double pointer to the head of the listint_t list
 *
 * This function reverses the links in a listint_t linked list,
 * modifying the head pointer to point to the new head of the reversed list.
 *
 * Return: The new head of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL, *curr = *head, *next;

	while (curr != NULL)
	{
		next = curr->next;
		curr->next = prev;
		prev = curr;
		curr = next;
	}

	*head = prev;
	return (*head);
}
