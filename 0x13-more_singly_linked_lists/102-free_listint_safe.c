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
	size_t node_count = 0;
	listint_t *current = *h;
	listint_t *temp;

	while (current)
	{
		node_count++;
		temp = current;
		current = current->next;
		free(temp);

		if (temp < current)
		{
			*h = NULL;
			break;
		}
	}

	return (node_count);
}
