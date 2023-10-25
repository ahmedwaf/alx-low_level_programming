#include "lists.h"
/**
 * free_listint_safe - Safely frees a listint_t linked list.
 * @h: Double pointer to the head of the listint_t list
 *
 * It sets the head pointer to NULL and returns the size of the freed list.
 *
 * Return: The size of the freed list
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *current, *temp;
	size_t size = 0;

	if (h == NULL)
		return (0);

	current = *h;
	while (current != NULL)
	{
		size++;
		temp = current;
		current = current->next;
		free(temp);
	}

	*h = NULL;
	return (size);
}
