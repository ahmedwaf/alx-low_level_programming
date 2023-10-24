#include "lists.h"
/**
 * add_nodeint_end - adds a new node at the beginning of a linkd list
 * @head: a pointer to the head of the linked list
 * @n: data for the node we are adding
 * Return: the address of the new element
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_mode = malloc(sizeof(listint_t));
	listint_t *current;

	if (new_mode == NULL)
	{
		return (NULL);
	}
	new_mode->n = n;
	new_mode->next = NULL;

	if (*head == NULL)
	{
		*head = new_mode;
		return (new_mode);
	}
	current = *head;
	while (current->next != NULL)
		current = current->next;

	current->next = new_node;
	return (new_node);
}
